/*
i costruttori e i distruttori sono metodi speciali delle strutture
sono metodi chiamati nel momento dellla creazione di un elemento di una strtuttura e 
nel momento della loro distruzione (quando vengono distrutte da noi o a fine programma)

i costruttori servono per inizializzare i dati della struttura, tramite valori standard o tramite parametri
*/

#include<iostream>
#include <cstdlib>
using namespace std;

typedef struct esempio{
    int valore1;
    int valore2;

    void stampa(){  //procedura all'interno della struttura
        cout << "valore1: " << valore1 << " valore2: " << valore2 << endl; //non devi usare la dot notation
    }
    int somma(){
        return valore1 + valore2;
    }
    esempio(){      //il costrtuttore è un metodo definito solamente dal nome della struttura e eventuali parametri
    valore1 = 0;
    valore2 = 0;
    }
    esempio(int a){ //possono esserci più costruttori, devono avere differenti parametri (in numero o in tipo)
    valore1 = a;
    valore2 = 0;
    }
    esempio(int a, int b){
    valore1 = a;
    valore2 = b;
    }
    ~esempio(){     //il distruttore è uno solo, viene indicato come un costruttore senza parametri ma preceduto da ~
    cout << "l'oggetto è stato distrutto" << endl;
    }
}esempio;

int main(int argc, char *argv[]){
    esempio struttura;
    struttura.valore1 = 10;
    struttura.valore2 = 12;
    struttura.stampa();
    cout << "somma: " << struttura.somma() << endl;

}