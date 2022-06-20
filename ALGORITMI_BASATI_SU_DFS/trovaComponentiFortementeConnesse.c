/* È dato un grafo non orientato G=(V, E), non necessariamente connesso, e un vertice s in V. Scrivere un
algoritmo che restituisca il numero di nodi che fanno parte della componente connessa di cui fa parte s */
main(){
    L = new() //Lista di nodi
    DFS(G)
    createT(G)//Creo il grafo trasposto di G
    while L != NIL
        u = l.pop()
        if u.color == white
            DFS-T-VISIT(G. U)
        SCC = predecessor-subgraph
}


DFS(G){
    for ogni vertice u in G.V 
        u.color = white
        u.pi = nil
    time = 0
    for ogni vertive u in G.V
        if u.color == white
            dfs-visit(G, u)
}

DFS-VISIT(G, U){
    time = time + 1
    u.d = time
    u.color = gray

    for ogni vertice v in Adj[U]
        if v.color == white
            v.pi = u
            DFS-VISIT(G, V)
    insert(u, L)//Aggiungo i vertici nell'ordine in cui vengono scoperti
    u.color = black
    time = time + 1
    u.f = time
}

DFS-T-VISIT(G, U){
    time = time + 1
    u.d = time 
    u.color = gray
    for ogni vertice v in G
        if v.color == white
            v.pi = u
            DFS-T-VISIT(G, V)
    u.color = black
    time = time + 1
    u.f = time
}