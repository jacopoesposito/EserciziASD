/* Dato un grafo orientato scrivere un algoritmo che restituisca 
true se esiste almeno un ciclo formato da due archi altrimenti restituisca false. */

DFS(G){
    for ogni vertice v in G.V{
        v.color = white
        v.pi = NIL
    }

    for ogni vertice v in G.V{
        if v.color == white
            DFS-VISIT(G, v)
    }

    return FALSE
}

DFS-VISIT(G, u){
    u.color = gray
    time = time + 1
    u.d = time

    for ogni vertice v in G.adj[u]{
        numero_archi++;
        if v.color == gray
            if numero_archi >= 2
                return TRUE
        if v.color == white
            v.pi = u
    }

    u.color = black
    time = time + 1
    u.f = time
}