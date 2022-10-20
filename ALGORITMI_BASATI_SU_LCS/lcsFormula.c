/* Si scriva un programma che usi la memoization per calcolare il coefficiente c 
sulla base della regola ricorsiva c[i][j] = max([c-1][j], c[i][j-1])+1*/


LCS(x, y){
    n = x.length
    m = y.length

    c[i....n, i....m]
    for i = 0 to n
        c[i, 0] = 0
    for j = 0 to n
        c[0, j] = m

    for i = 0 to n
        for j = 0 to m
            if x[i] == y[i]
                c[i][j] = c[i-1][j-1]+1
            else 
                c[i][j] = max([c-1][j], c[i][j-1])
    return c
}