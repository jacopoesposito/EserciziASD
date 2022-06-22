/*Dato un grafo orientato G=(V,E) ed un albero radicato T con radice g e composto da tutti i nodi V, 
scrivere un algoritmo in pseudocodice che restituisca TRUE se T corrisponde all’albero DF del grafo G e FALSE altrimenti.*/

combacianoDF(G, T){
    DFS(G)
    
    for(int = 0, i < T.length, i++){
        if(G[i] != T[i])
            return false
        else 
            return true
    }
}

DFS(G){
    for ogni vertice v in G.V
        v.color = white
        v.pi = NIL
    time = 0
    for ogni vertice u in G.V
        if u.color == white
        DFS-VISIT(G, u)
}

DFS-VISIT(G, u){
    time = time+1
    u.d = time
    u.color = gray
    for ogni vertice v in G.V
        if v.color == white
        v.pi = u
    time = time + 1
    u.color = black
    u.f = time
}