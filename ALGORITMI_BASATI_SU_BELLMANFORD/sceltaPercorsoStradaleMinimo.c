/* Una rete stradale è descritta da un grafo orientato pesato G=(V, E, w). Per ogni arco (u, v), la funzione costo
w(u, v) indica la quantità (in litri) di carburante che è necessario consumare per percorrere la strada che
congiunge u con v. Tutti i costi sono maggiori o uguali a zero. Si consideri un veicolo che ha il serbatoio in
grado di contenere C litri di carburante, inizialmente completamente pieno. Non sono presenti distributori di
carburante.
Scrivere un algoritmo che, dati in input il grafo pesato G, la quantità C di carburante inizialmente presente
nel serbatoio, e due nodi s e d, restituisce true se e solo se esiste un cammino che consente al veicolo di
raggiungere d partendo da s, senza rimanere a secco durante il tragitto. E' possibile rappresentare il grafo
come meglio si ritiene (es., mediante liste di adiacenza). */

sceltaPerscorsoStradaleMinimo(G, Carburante, s, d){
    Initialize-Single-Source(G, s)
    for i = 1 to |G.V| - 1 
        for ogni arco (u, v) contenuto in G e che porta a D
            relax(u, v, w)
    for ogni arco (u, v) contenuto in G e che porta a D
            carburante = carburante - w(u, v)
            if(carburante < 0)
                controlloCarburante = false
            else controlloCarburante = true 
    return controlloCarburante
}

Initialize-Single-Source(G, s){
    for ogni vertice v contenuto in G
        v.d = infinito
        v.pi = nil
    s.d = 0
}

relax(u, v, w){
    if v.d > u.d + w(u, v)
        v.d = u.d + w(u, v)
        v.pi = u
}