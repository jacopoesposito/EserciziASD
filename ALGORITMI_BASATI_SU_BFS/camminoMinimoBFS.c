/*  Dato un grafo non orientato G= (V,E), un nodo sorgente s € V, scrivere un algoritmo, 
    in pseudocodice, che restituisca la lista dei nodi, 
    il cui cammino minimo dal nodo sorgente s è massimo
*/

BFS-CamminiMinimi(G, s)
for ogni vertice v in G.V
    v.color = white
    v.d = infinity
    v.pi = nil

s.d = 0
s.color = gray
s.pi = NIL
Q = 0
enqueue(Q, s)
while(Q != 0)
u = Dequeue(Q)
for ogni vertice v in G.adj[u]
    if v.color == white
        v.pi = u
        v.color = gray
        v.d = u.d + 1
        list.add(v)
        Enqueue(Q, v)
    v.color = black
return list