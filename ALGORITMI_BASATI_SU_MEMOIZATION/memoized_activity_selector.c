memoized_activity_selector(p)
n = p.length
c[1...n, 1...n]

for i = 1 to n
    for j = 1 to n
        c[i,j] = inf

return lookup_as(c, p, i, j)

lookup_as(c, p, i, j){
    if c[i, j] < inf
        return c[i, j]

    else if i = j
        c[i,j] = 0
    else 
        for k = i to j-1
            q = lookup_as(c, p, i, k) + lookup_as(c, p, k+1, j) + 1
            if q > c[i, j]
                c[i, j] = q
    
    Return c[i, j]
}