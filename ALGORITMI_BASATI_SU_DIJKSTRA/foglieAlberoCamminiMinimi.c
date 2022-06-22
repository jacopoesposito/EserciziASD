/* Dato un grafo G=(V,E) aciclico orientato e pesato con funzione peso non negativa w: E->R+ ed un nodo s (appartenente) a V, 
si scriva un algoritmo in pseudocodice che restituisca i nodi foglia dell’albero dei cammini minimi radicato in s. */

Initialize-Single-Source(G, s)
    for ogni vertice v in G.V
        v.d = infinity
        v.pi = NIL
    s.d = 0

Relax(u, v, w){
    if u.d > v.d + w(u, v)
        v.d = u.d + w(u, v)
        v.pi = u
}

Dijkstra(G, w, s){
    Initialize-Single-Source(G, s)
    S = 0
    Q = G.V

    while Q != 0
        u = extract-min(Q)
        S = S u {u}
        for ogni vertice v in G.adj[u]
            relax(u, v, w)
    
    for ogni vertice V in Q1.V
        if v.l != NIL or V.r != NIL
            S.remove(v)
    
    Return S
}