/* Dato un grafo orientato G=(V,E) non pesato, 
si scriva in pseudocodice un algoritmo che restituisca il numero dei cicli presenti nel grafo. */

DFS(G){
    for ogni vertice v in G.V 
        u.color = white
        u.pi = nil
    time = 0
    for ogni vertice u in G.V
        if u.color == white
            DFS-VISIT(G, u)
}

DFS-VISIT(G, u){
    time = time + 1
    u.d = time 
    u.color = gray
    for ogni vertice v in G.V 
        if v.color == white
            v.pi = u
            DFS-VISIT(G, u)
        if v.color == gray
            contatoreCicli = contatoreCicli+1
    time = time + 1
    u.color = black
    u.f = time
    return contatoreCicli
}