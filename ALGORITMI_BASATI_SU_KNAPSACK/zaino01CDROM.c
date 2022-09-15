/* Supponiamo  di  avere n files  aventi  rispettivamente  dimensione    F1,  F2,  ...  Fn
(le dimensioni  sono  numeri  interi  positivi  e  sono  espresse  in  MB). 
Disponiamo  di  un CD-ROM avente capacità 650MB; sfortunatamente, il CD-ROM potrebbe non essere sufficientemente 
capiente per memorizzare tutti glin files.  a)Scrivere un algoritmo efficiente per determinare 
il numero massimo di files che è possibile memorizzare sul CD-ROM senza eccederne la capacità. 
Non è richiesto che l'algoritmo stampi anche quali file memorizzare. */

Knapsak01(v, w, W){
    n <= v.length
    V[0...n, 0...W]
    for i <= 0 to v
        V[i, 0] <= 0
    for j <= 0 to W
        V[0, j] <= 0
    
    for i <= 1 to v
        for j <= 1 to W
            if j < w[i]
                v[i, j] <= V[i-1, j]
            else 
                v[i, j] <= max(V[i-1, j], V[i-1, j-w[j]]+v[i])
    
    Return V[n, W]
}