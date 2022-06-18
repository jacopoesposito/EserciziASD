/* Dato un grafo orientato G=(V, E) e non pesato. Si scriva un algoritmo, in pseudocodice
che restituisca TRUE se nel grafo c'è almeno un arco trasversale; altrimenti restituisca FALSE. Analizzare 
la complessità del grafo nel caso peggiore */

DFS(G){
for ogni vertice u in G.V
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
    for ogni vertice v in G.Adj[u]
        if v.color == white 
        v.pi = u
        DFS-VISIT(G, v)
        if(v.color == black)
            if(v.d < u.d)
                return true
    u.color = black
    time = time + 1
    u.f = time
    return false

}