/* Al celebre maghetto Harry Potter e stata regalata una scopa volante modello Nimbus3000 e tutti i suoi
compagni del Grifondoro gli chiedono di poterla provare. Il buon Harry ha promesso che nei giorni a
venire soddisfera le richieste di tutti, ma ogni ragazzo è impaziente e vuole provare la scopa il giorno
stesso. Ognuno propone ad Harry un intervallo di tempo della giornata durante il quale, essendo libero da
lezioni di magia, puo fare un giro sulla scopa, e per convincerlo gli offre una certa quantit a di caramelle
Tuttigusti+1. Allora Harry decide di soddisfare, tra tutte le richieste dei ragazzi, quelle che gli procureranno
la massima quantita di caramelle (che poi spartira coi suoi amici Ron e Hermione). Aiutalo a trovare la
migliore soluzione possibile*/

maximumcandyfirstHarry(studenti, t){
    n = studenti.length
    k = 1
    ordina_studenti_tmpArrivo(studenti)
    // caramelle = 0
    for i = 2 to n {
        if(studenti[i].caramelle > studenti[k].caramelle)
        insertStudente(studenti[i])
        k = m
    }
}