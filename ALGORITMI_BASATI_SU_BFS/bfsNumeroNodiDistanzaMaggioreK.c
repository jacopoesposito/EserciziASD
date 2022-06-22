/* Dato un grafo non orientato G, una sorgente s e un intero k, 
creare un algoritmo che calcolato il cammino minimo, 
restituisca il numero di nodi che si trovano a distanza maggiore di k. */

BFS-Modificata(G, s){
    for ogni vertice u in G.V - {s}
        u.color = white 
        u.d = infinity
        u.pi = nil
    s.color = gray
    s.d = 0
    s.pi = nil
    Q = 0
    Enqueue(Q, s)
    while Q != 0
        for ogni v in G.adj[u]
            if u.d > k
                numeroNodiDistanti = numeroNodiDistantiK + numeroNodiDistantiK
            if v.color == white
                v.color = gray
                v.d = u.d+1
                v.pi = u
                Enqueue(Q, v)
        u.color = black
    Return numeroNodiDistanti 
}