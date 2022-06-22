/* Scrivere un algoritmo in pseudocodice che restituiscacome output 
il numero degli scambi necessari ad ordinare un array di numeri utilizzando Heapsort. */
scambio = 0

HEAPSORT(A)
    BUILD-MAX-HEAP(A)
    for i = A.length down to 2
        scambia A[1] con A[i]
        scambio++
        A.heapsize = A.lenghtsize - 1
        Max-Heapify(A,1)

Max-Heapify(A, i){
    l = left[A]
    r = rigth[A]

    if l <= a.heapsize and A[l] > A[i]
        massimo = l
    else massimo = i
    if r <= A.heapsize and A[r] > A[massimo]
        massimo = r
    else massimo = i
    if massimo != i
        scambio A[i] con A[massimo]
        scambio++
        Max-Heapify(A, massimo)
}

BUILD-MAX-HEAP(A){
    A.heap-size = A.length
    for i = [A.length/2] downto 1
        Max-Heapify(A, i)
}
