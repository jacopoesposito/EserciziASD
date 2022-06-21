/* Il vostroprovider di internet vi ha dato la possibilità di accedere ad un videoserver per un’ora e di fare liberamente il download di un file alla volta. 
Il videoserver vi mette anche a disposizione per ogni suo film F il suo tempo stimato di download. 
Supponete che nell’ora a vostra disposizione la velocità di download rimanga costante e che non sia possibile scaricare contemporaneamente più film. 
Scrivete un algoritmo in peseudocodice che massimizzi il numero di film scaricati nel tempo a disposizione.
Stimate la complessità computazionale del vostro algoritmo. */

movieSelector(A){
    Selected-Activity = 0
    Q = A //Coda basata su min-heap
    time = MAX_TIME

    while Q != 0 and TIME > 0
        u = EXTRACT-MIN(Q)
        if u.time < time
        time = time - u.time
        else
        time = 0
    Return Selected-Activity        
}