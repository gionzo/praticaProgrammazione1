/*
per fare una lista di elementi bisogna utilizzare una struttura del tipo:
struttura{
    elemento
    inirizzo alla struttura successivo
}
ogni elemento della lista è un oggetto di tale struttura connesso in ordine
*/

#include "header.h"

int main(int argc, char *argv[]){

nodo *n = new nodo(5);  //creo due nodi connessi
nodo *m = new nodo(3, n);

fifo f; //creo una variabile di tipo fifo, e assegno tail e head ai due nodi creati
f.head=m;
f.tail=n;
f.num=2;    //inizializzo il numero di elementi a 2

add(&f,6);
add(&f,7);
stampa(&f);


}