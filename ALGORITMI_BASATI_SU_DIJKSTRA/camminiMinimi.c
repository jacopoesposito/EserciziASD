/* Hai grafo orientato aciclico pesato con pesi w come numeri reali positivi (quindi già pensi a Dijkstra), 
restituire quanti nodi m del cammino minimo sono compresi tra in numero intero L e H */
Initialize-Single-Source(G, s)
    for ogni vertice v in G.V
        v.d = infinity
        v.pi = 0
    s.d = 0

relax(u, v, W){
    if v.d > u.d + w(u, v)
        v.d = u.d + w(u, v)
        v.pi = u
}

Djikstra(G, s){
    ISS(G, s)
    list Q = G.V
    list A = 0;

    while Q != empty
        u = extract-min(Q)
        A = A U {u}
        for ogni vertice v in G.adj[u]
            relax(u, v, w)

    for ogni vertice v in A
        if v > L and v < H
            count++
    
    return count;
}