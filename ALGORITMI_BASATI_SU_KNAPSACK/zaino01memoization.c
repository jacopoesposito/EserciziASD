/* Scrivere un algoritmo in pseudocodice, che risolva il problema dello zaino 01, utilizzando la tecnica della memoization */

memoizedKnapsack(v, w, W){
    n = v.length
    V[0...n, 0....m]
    for i = 0 to n
        for j = 0 to m
            V[i, j]=infinity
    Return lookupKnapsack(v, w, V, n, W)
}

lookupKnapsack(v, w, V, n, W){
    if V[i, j] < infinity
        return V[i, j]
    else if i = 0 or j = 0
        V[i, j] = 0
    else 
        if j < w[i]
            V[i, j] = lookupKnapsack(v, w, V, n, W)
        else V[i, j] ← max(Lookup Knapsack(v, w, V, i – 1, j),  LookupKnapsack(v, w, V, i – 1, j – w[i]) + v[i])
}