/* Una pizzeria durante una partita di calcio ha contemporaneamente richieste di pizze da piΓΉ clienti.
Il pizzaiolo deve infornare quindi p pizze, ciascuna con tempo T[p] di cottura. 
Bisogna schedulare le pizze dando in input al forno le pizze π1...ππe i corrispondenti tempi π[π1]...π[ππ],
in modo da minimizzare il tempo medio di attesa per il cliente. */

Greedy-Activity-Selector(A){

    Selected-Activity = 0
    Q = A
    time = MAX

    while Q != 0 and time > 0
        u = EXTRACT-MIN(Q)
        if u.time < time 
            selected-activity = selected-activity + 1
            time = time - u.time
        if u.time > time
            time = 0
    Return selected-activity
}