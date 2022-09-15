/* 4)	La Fiat per la produzione della nuova panda ha installato nello stabilimento di Pomigliano d’Arco K catene di montaggio.
Ogni catena di montaggio ha L stazioni di lavoro. 
Ogni stazione di lavoro ha un tempo di lavorazione differente  T.
Inoltre il telaio della nuova panda impiega un tempo iniziale I per entrare nella catena di montaggio ed un tempo differente U per ogni catena di montaggio per uscire. 
Si assuma che il tempo di migrazione tra due stazioni successive all’interno della stessa catena sia e. 
Infine, per fornire all’impianto la massima flessibilità si preveda la possibilità che la nuova panda possa migrare da una catena di montaggio all’altra e 
tale operazione impieghi un tempo, differente per ogni catena, pari ad S.
Si risolva, mediante la programmazione dinamica, il problema di individuazione per ogni vettura del percorso più rapido, 
scrivendo le relative equazioni di ricorrenza. Successivamente si scriva, un algoritmo di memoization, 
in pseudocodice, che, utilizzando le equazioni di ricorrenza suddette, individui per ogni vettura il percorso più rapido.
 */

f1[1] <= e[1] + a[1,1]
f2[2] <= e[2] + a[2,1]

for j = 2 to n
    if f1[j-1] + a[1, j] <= f2[j-1] + t[2, j-1] + a[1, j]
        then f1[j] <= f1[j-1] + a[1,j]
             l[1, j] <= 1
        else f[1, j] <= f2[j-1] + t[2, j-1] + a[1,j]
             l[1, j] <= 2
    if f[2, j-1] + a[2, j] <= f[1, j-1] + t[1, j-1] + a[2, j]
        l[2, j] <= 1
    else f2[j] <= f1[ j - 1 ] + t[1, j-1] + a[2, j]
        l[2, j] <= 2
    
if f1[n] + x1 <= f2[n] + x2
    then f* <= f1[n] + x1
        l* <= f2[n] + x2
    else f* <= f2[n] + x2
        l* <= 2