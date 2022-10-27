/* Si scriva un algoritmo che8 calcoli la 
distanza di editing tra il proprio nome e il proprio cognome */

distanza_editing(string1, string2)
n = string1.length()
m = string2.length()

d[0....n, 0....m]

for i = 0 to n
    d[i,0] = i
for j = 0 to n
    d[0, j] = j

for i = 0 to n
    for j = 0 to m
        if string1[i] == string2[j]
            dist_sub = 0
            d[i,j] = d[i-1, j-1]
        else 
            dist_sub = 1
            d[i, j] = min(d[i-1, j]+dist_sub, d[i, j-1]+dist_sub, d[i-1,j-1]+1)