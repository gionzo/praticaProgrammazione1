#include "header.h"

nodo :: nodo(){
    valore = 0;
    next = NULL;  //non punta nulla
}

nodo :: nodo(int v){
    valore = v;
    next = NULL;
}

nodo :: nodo(int v, nodo* n){
    valore = v;
    next = n;
}

void add(nodo *h, int val){
nodo *n;    //creo un nuovo nodo
n=h;    //lo eguaglio a head per non andare a variare la testa
while(n->next != NULL){ //finché il prossimo di n è diverso da null eseguo il ciclo
    n=n->next;  //faccio diventare n il suo successivo
}
//a questo punto so che n->next == NULL quindi aggiungo il nuovo nodo
nodo *r = new nodo(val);    //creo un nuovo nodo e assegno il valore passato per parametro
n->next = r;    //collego il precedentemente ultimo elemento al nuovo creato
}

void rem(nodo *h){
    nodo *n;
    n=h;
    while((n->next)->next!=NULL){
        n=n->next;
    }
    //ora il prossimo di n è un elemento il cui successivo è null quidi n è il penultimo elemento
    delete n->next;
    n->next = NULL;
}

void stampa(nodo *h){
    nodo *n;
    n=h;
    while(n!=NULL){
        cout << n->valore << endl;
        n=n->next;
    }
}

