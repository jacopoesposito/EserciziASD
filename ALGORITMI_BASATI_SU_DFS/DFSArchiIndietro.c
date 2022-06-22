/* Dato un grafo orientato e non pesato, 
scrivere un algoritmo che restituisca TRUE se esiste un arco all’indietro, altrimenti FALSE. 
Determinare il caso peggiore ed il caso migliore. */

DFS(G){
    for ogni vertice u in G.V
        u.color = white
        u.pi = nil
    time = 0
    for ogni vertice u in G.V
        if color == white 
            DFS-VISIT(G, u)
}

DFS-VISIT(G, u){
    time = time + 1
    u.d = time
    u.color = gray

    for ogni vertice v in G.adj[u]
        if color == gray
            return true
        if color == white
            v.pi = u 
            DFS-VISIT(G, u)
    u.color = black
    time = time + 1
    u.f = time 
    return False
}