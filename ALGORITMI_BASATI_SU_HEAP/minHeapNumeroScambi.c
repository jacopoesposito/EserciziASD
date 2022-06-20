/* Dato un albero MinHeap H di grandezza Heapsize+1, si estragga il minimo e lo si  scambi con l'ultimo elemento. 
Si scriva un algoritmo che prendendo in input H e la grandezza Heapsize, restituisce il numero di scambi in H necessari a ripristinare la proprietà dell'Heap. 
Qualora l'albero soddisfi la priorità dell'Heap, l'algoritmo deve restituire valore 0. */ 

controlloScambi(H, heapsize){
    scambi = 0
    minHeapify(H, h.radice, scambi)
    if scambi == 0
        return 0
    else return scambi
    
        
}

minHeapify(H, i, scambi){
    i=h.min()
    l= Left(i)
    r= Right(i)
    scambio = 0

    if l<= heapsize and A[l] < A[i]
        minimo = l
    else minimo = i
    if r <= heapsize and A[r] < A[i]
        minimo = r
    if minimo != i
        scambia A[i] con A[minimino]
        scambio += scambio + 1
        minHeapify(H, i, scambi)
}