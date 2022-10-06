/* Sia T un BST in cui ogni nodo ha un attributo c {rosso,nero}. 
Scrivere un algoritmo che restituisced TRUE se T è un albero red/black e FALSE altrimenti. */

Pre-order-visit(nodo, altezza_nera){
        altezza_prec = altezza_nera
        if(nodo == T.root)
            if(nodo.color != black){
                return false
            }

        if(nodo.left == black)
            altezza_nera_left++
        if(nodo.right == black)
            altezza_nera_right++

        if(nodo.left == NIL && nodo.right == NILL){
            if(nodo.color != black){
                return false
            }
            if(altezza_nera != altezza_prec)
                return false;
            nodo.altezza_nera = altezza_nera
        }

        if(nodo.color == red){
            if(nodo.left.color != black or nodo.right.color != black)
                return false
        }

        Pre-order-visit(nodo.left, altezza_nera)
        Pre-order-visit(nodo.right, altezza_nera)

        if(altezza_nera_right != altezza_nera_left){
            return false
        }else{
            return true
        }
}