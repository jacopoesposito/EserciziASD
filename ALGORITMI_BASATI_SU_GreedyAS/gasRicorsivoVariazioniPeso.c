/* Si supponga di registrareil proprio peso corporeo ogni giorno. 
Dopo ogni n giorni vogliamo conoscere la maggiore variazione di peso che si è verificata in un intervallo di giorni consecutivi.
Si scriva in pseudocodice un algoritmo ricorsivo che, ricevuto in input le n misurazioni, restituisca la maggiore variazione di peso in giorni consecutivi.*/

misurazioniPeso //Ordinate giornalmente
i = 0
massimaVariazione = 0
checkingPeso(misurazioniPeso, massimaVariazione, i){
    variazionePeso = 0
    if i == misurazioniPeso.length
        return massimaVariazione
    if misurazionePeso[i] > misurazioniPeso[i+1]
        variazionePeso = misurazionePeso[i] - misurazionePeso[i+1]
    else variazionePeso = misurazionePeso[i+1] - misurazionePeso[i]

    if massimaVariazione < variazionePeso
        checkingPeso(misurazionePeso, variazionePeso, i+1)
}