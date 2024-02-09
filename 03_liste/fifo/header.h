#ifndef __HEADER__
#define __HEADER__

#include<iostream>
#include <cstdlib>
using namespace std;

typedef struct nodo{
    int valore;
    nodo *next;
    nodo();
    nodo(int v);
    nodo(int v, nodo* n);
}nodo;

typedef struct fifo{
    nodo *head;
    nodo *tail;
    int num;
}fifo;

void add(fifo *f, int val); //passi la struttura della fifo e il valore che conterrà il nodo successivo
void rem(fifo *f);  //passi la struttura della fifo
void stampa(fifo *f);   //stampa la lista

#endif 
