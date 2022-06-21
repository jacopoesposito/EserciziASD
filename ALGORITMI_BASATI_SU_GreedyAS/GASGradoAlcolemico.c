/* Vostro padre è appassionato di vino. Vostro padre è anche affetto da diabete e non può bere vini con un grado alcolico elevato.
Poiché domani festeggerà gli anni, avete deciso di regalargli alcune bottiglie, acquistandole su Amazon.
Supponendo che  il vostro budget è di K euro e che per ognibottiglia disponibile b sia notosia il suo prezzo P(b) e sia il grado alcolemico A(b), 
scrivete un algoritmo che determini le bottiglie da acquistare minimizzando il grado alcolemico complessivamente acquistato.
Supponete che P(b) ed A(b) siano interi, per ogni bottiglia b. */

n = arrayVini.length
A = A U {b1}
k = 1
spesaTotale = 0
spesaTotale = spesaTotale + B[1].P
for j = 2 to n
    if spesaTotale < K
        if b[j].A < b[k].A
            A = A U b[j]
            spesaTotale = spesaTotale + b[j].p  
Return A