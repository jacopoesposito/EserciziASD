/* Progettare  e  descrivere  in  pseudocodice  un  algoritmo  per risolvere il seguente problema: dato un grafo non orientato G = (V,E),
 rappresentato mediante liste di adiacenza:
 a)contare il numero di componenti connesse di G che sono alberi. */

 DFS(G){
    for ogni vertice v in G.V
        v.color = "white"
        v.pi = NIL
    time = 0
    for ogni vertice u in G.V
        if u.color == white
            DFS-Visit(G, u)
            if(!check)
                ntree++
 }

 DFS-Visit(G, u){

    u.color = gray
    time = time + 1
    u.d = time

    for ogni vertice v in G.adj[u]
        if v.color == white
            v.pi = u
            DFS-Visit(G, u)
        if v.color == gray
            check = true
            return
    
    u.color = black
    time = time + 1
    u.f = time
 }