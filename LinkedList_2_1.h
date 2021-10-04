// Jose Rositas
// 30 Sept 2021

//Complejidad O(n) Lineal, depende de size
template <class T>
void LinkedList<T>::reverse(){
    if(size>1){
        Node<T> *curr = head->getNext();
        Node<T> *aux = nullptr;
        head->setNext(nullptr);
        while(curr != nullptr){
            aux = head;
            head = curr;
            curr = curr -> getNext();
            head->setNext(aux);
        }
    }
}

//Complejidad O(n) Lineal, depende de size
template <class T>
void LinkedList<T>:: shift(int n){
    if(size > 1){
        int res = n % size;
        if(res < 0){
            res = size + res;
        }
        int saltos = res;
        if(saltos > 0){
            Node<T> *curr = head;
            Node<T> *aux = nullptr;
            for(int i=1; i<=saltos; i++){
                aux = head;
                head = head->getNext();
            }
            aux->setNext(nullptr);
            aux = head;

            while(aux->getNext() != nullptr){
                aux = aux->getNext();
            }

            aux->setNext(curr);
        }
    }
}

//Complejidad O(n) Lineal, depende de size
template <class T>
bool LinkedList<T>::operator==(const LinkedList<T> &otra){
    if(size == otra->size()){
        Node<T> *curr1 = head;
        Node<T> *curr2 = otra->head();

        for (int i = 1; i <= size; i++)
        {
            if (curr1->getData() != curr2->getData()){
                return false;
            }
            curr1 = curr1->getNext();
            curr2 = curr2->getNext();
        }
        
    }
    return true;
}
