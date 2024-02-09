/*
per fare una lista di elementi bisogna utilizzare una strutturadel tipo:
struttura{
    elemento
    inirizzo alla struttura successivo
}
ogni elemento della lista è un oggetto di tale struttura connesso in ordine
*/

#include "header.h"

int main(int argc, char *argv[]){

nodo *head = new nodo;   //la funzione new alloca in memoria le celle di spazio necessarie per contenete una variabile di tipo nodo
//head sarà il puntatore al primo elemento della funzione, indicheremo la funzione stessa con tale elemento

head->valore = 5;   //head->valore  è come fare  (*head).valore  ma più comodo
stampa(head);
cout << endl;

add(head, 10);
add(head, 3);
stampa(head);
cout << endl;

rem(head);
stampa(head);
cout << endl;

}