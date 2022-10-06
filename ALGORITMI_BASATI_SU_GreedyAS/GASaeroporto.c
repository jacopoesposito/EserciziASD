/* dati N aerei e una pista di atterraggio, definito ti come l' i-esimo tempo di atterraggio di un areo, 
utilizzando una coda di priorità, si minimizzi il tempo di attesa medio o tournaround di ciascun areo. */

Greedy-Activity-Aereoporto(){
    Selected-Activity = 0
    Q = A
    time = max

    while Q != 0 and time > 0
        u = extract-min(Q)
        if u.time < time 
            selected-activity = selected-activity + 1
            time = time + u.time
        if u.time > time 
            time = 0
    Return selected-activity
}