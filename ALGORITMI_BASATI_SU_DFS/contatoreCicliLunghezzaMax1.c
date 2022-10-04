Dato un grafo orientato G = (V,E), scrivere un algoritmo, in pseucodice, 
che calcoli il numero dei cicli, di lunghezza maggiore di 1, presenti nel 
grafo 
(7 punti).

orientato
non pesato
ti servono i cicli -> ti trovi l arco all'indietro 
	ogni volta che ne trovi uno incrementi un contatore

DFS (G)
for each v € G.V
	P|v|<-NIL
	v.color=WHITE
time<-0
for each v € G.V
	if v.color=WHITE
		DFS_visit(G,v)
	
DFS_visit(G,v)
v.d<-time<-time+1
v.color<-GRAY
for each u € G.Adj[v]
	count_lunghezza++
	if u.color = GRAY				
		if count_lunghezza > 1
		count_cicli++
	if u.color<-WHITE
		P|u|<-v
		DFS_visit(G,u)
v.f<-time<-time+1
v.color<-BLACK
