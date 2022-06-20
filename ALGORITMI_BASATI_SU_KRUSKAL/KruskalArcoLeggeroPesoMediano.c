/* Dato un grafo non orientato G=(V,E) pesato con funzione peso ω:E->R.
Si scriva in pseudocodice un algoritmo che restituisca l’arco leggero e non sicuro di peso mediano.*/
//Peso mediano = "pivot" di una lista/array di archi 

MakeSet(u)
    u.rank = 0
    u.pi = u

FindSet(u)
    if u.pi != u
        u.pi = FindSet(u.pi)
Return u.pi

Union(u, v)
Link(FindSet(u), FindSet(v))

Link(u, v){
    if u.rank > v.rank
        v.pi = u
    else
        u.pi = v
        if v.rank == u.rank 
            v.rank = v.rank + 1
}

MST-KRUSKAL(G, w)
A = NIL
for each v in G.V
    MakeSet(v)
sort(w, 1, |G.E|)
for ogni arco (u, v) in G.E
    if (u, v) in A
        if FindSet(u)!=FindSet(v)
            A = A U {( u, v)}
            Union(u, v)
pivot = NIL
n = |A|
if n%2 != 0
    pivot = n/2 + 1
else 
    pivot = n/2

Return pivot