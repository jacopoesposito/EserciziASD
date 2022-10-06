/* Dato un grafo connesso, orientato e pesato, con radice nel nodo r, determinare l’altezza dell’MST */

Kruskal(G, w)
A = NIL
altezza = 0
for ogni vertice v in G.V
    MakeSet(v)

ordina tutti gli archi in modo non decrescente 
for ogni arco (u,v) in G.E
    if FindSet(u) != FindSet(v)
        A = A u {(u, v)}
        union(u, v)

checkAltezza(A, A.root)

return altezza

checkAltezza(A, nodo){
        if nodo.Left != null
            altezza++
            checkAltezza(A, nodo)            
}

MaKeSet(v){
    for ogni vertice v in G.V
        v.pi = v
        v.rank = 0
}

FindSet(V){
    if v.pi != v
        v.pi = FindSet(v)
    return v.pi
}

Link(u, v)
if u.rank > v.rank
    v.pi = u
else 
    u.pi = v
    if v.rank = u.rank
        v.rank = v.rank + 1

union(u, v)
    Link(FindSet(u), FindSet(v))