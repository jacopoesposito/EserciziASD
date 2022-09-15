/* Progettare e descrivere in pseudocodice un algoritmo per risolvere il seguente problema: 
Dato    un  grafo  un  grafo  orientato  G  =  (V,E)  rappresentato mediante liste di adiacenza e un nodo s ∈ V 
a) per  ogni  nodo  v ∈  V  raggiungibile  da  s,  trovare  la distanza  tra  s  e  v  (ovvero  la  lunghezza  del  più  corto cammino che congiunge s a v).
 b)valutare  il  tempo  di  calcolo  e  lo  spazio  di  memoriarichiesti su un input di n nodi e m lati.  
*/

DFS(G){
    for ogni vertice v in G.V
        v.pi = NIL
        v.color = "white"
        v.distanza = 0
    time = 0
    distanza = 0

    for ogni vertice u in G.V
        if u.color == "white"
            DFS-Visit(G, u)
}

DFS-Visit(G, u){
    u.color = "gray"
    time = time + 1
    u.d = time

    for ogni vertice v in G.adj[u]
        if v.color == "white"
            v.pi = u
            distanza++
            v.distanza = distanza
            DFS-Visit(G, u)
    
    u.color = "black"
    time = time + 1
    u.f = time
}