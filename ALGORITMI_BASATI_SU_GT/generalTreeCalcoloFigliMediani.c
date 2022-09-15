/* Dato  un  albero  generale  rappresentato  con  
puntatori  al  primo figlio/fratello,  
scrivere  due  algoritmi  per  calcolare  
il  numero totale   di   nodi   e   il   numero   totale  
 di   foglie   dell’albero. 
 Utilizzando  uno  o  entrambi  questi  algoritmi,  
 scrivere  un algoritmo per calcolare il grado medio 
 (numero medio di figli) dell’albero. 
Valutare la complessità dell’algoritmo proposto */

preorder(node){
    node++
    Print(node)
    if(!node.isLeaf){ //Controllo che non sia una foglia
        node temp = node.leftMostChild() //Prendo il figlio più a sinistra
        while(temp != null){
            preorder(temp)
            temp = temp.rightSibiling();
        }
    }
}

preorderNumberOfSone(node){
    node++
    Print(node)
    if(!node.isLeaf){ //Controllo che non sia una foglia
        node temp = node.leftMostChild() //Prendo il figlio più a sinistra
        while(temp != null){
            numberOfSon++
            preorder(temp)
            temp = temp.rightSibiling();
        }
    }
    else{
        middleValueSon = numberOfSon/node
    }
}

preorderNumberOfLeaf(node){
    Print(node)
    if(!node.isLeaf){ //Controllo che non sia una foglia
        node temp = node.leftMostChild() //Prendo il figlio più a sinistra
        while(temp != null){
            preorder(temp)
            temp = temp.rightSibiling();
        }
    }
    else{
        numberOfLeaf = numberOfLeaf + 1
    }
}