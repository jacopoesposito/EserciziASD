/* Dato un grafo orientato si scriva in pseudocodice un algoritmo che calcoli le componenti connesse del grafo. 
Si descriva lo pseudocodice di ogni funzione richiamata */

DFS(G){
    for ogni vertice v in G.V 
        v.color = white
        v.pi = NIL
    time = 0

    for ogni vertice v in G.V
        if v.color == white
            DFS-Visit(G, v)
            componenti_connesse++
}

DFS-Visit(G, u){
    u.color = gray
    time = time + 1
    u.d = time

    for ogni vertice v in G.adj[u]
        if v.color == white
            v.pi = u
            DFS-Visit(G, v)

    u.color = black
    time = time + 1
    u.f = time
}