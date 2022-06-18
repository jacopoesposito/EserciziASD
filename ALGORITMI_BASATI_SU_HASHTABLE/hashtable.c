/* Data un hashtable H che utilizza il metodo dell'indirizzamento aperto per risolvere il 
problema delle collisioni. Si supponga di risolvere il problema della cancellazione inserendo
il simbolo # nella locazione contenente il termine che si vuole cancellare. Scrivere, in 
pseudocodice, le funzioni INSERISCI e RICERCA che supportino la cancellazione di un elemento nella tabella H */

Hahs-Insert(T, k){
    i=0
    repeat
        j=h(k,i)
        if t[j]==NIL or t[j] == #
            t[j]=k 
            return j
        else i = i + 1
    until i == m
    error("overflow table")
}

Hash-Search(T, k){
    i=0
    repeat
        j=h(k,i)
        if t[j] == k 
            return j
        else i = i + 1
    until t[j] == nil or i == m 
    error("Value not found")        
}