/* Dato un grafo orientato G, rappresentato mediante una lista  di adiacenza scrivere
 un algoritmo, in pseudocodice, che restituisca 
 la lista di puntatori ai vertici di G di grado massimo
*/

DFS(G){
    for ogni vertice v in G.V
        v.color = white
        v.pi = nil
    time = 0

    for ogni vertice v in G.V
        if v.color == white
            DFS-Visit(G, v)
}

DFS-Visit(G, u){
    time = time + 1
    u.d = time 
    u.color = gray

    for ogni vertice v in G.adj[u]
        u.archi++
        if v.color == white
            v.pi = u
            countArchi++
            DFS-Visit(G, v)
    if max < u.archi
        max = u.archi
        list.add(u)

    time = time + 1
    u.f time
    u.color = black
}