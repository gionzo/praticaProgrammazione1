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

void add(fifo *f, int val){
    nodo *n = new nodo(val);    //creo un nuovo nodo con valore val
    f->tail->next = n;  //assegno al successivo della coda il nuovo nodo
    f->tail = n;
    f->num++;
}

void rem(fifo *f){
    nodo *n = f->head;
    f->head = n->next;  //faccio diventare il successivo dello head il nuovo head
    delete n; //dealloco n
    f->num--;
}

void stampa(fifo *f){
    nodo *n;
    n=f->head;
    while(n!=NULL){
        cout << n->valore << endl;
        n=n->next;
    }
}

