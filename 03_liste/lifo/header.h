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

void add(nodo *n, int val); //passi un nodo head e il valore che conterrà il nodo successivo
void rem(nodo *n);  //passi head
void stampa(nodo *h);   //stampa la lista

#endif 
