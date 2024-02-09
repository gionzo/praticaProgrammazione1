/*
i metodi sono delle funzioni poste all'interno delle strutture,
possono essere sia procedure(un tipo di funzioni) o funzioni con risultato
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
}esempio;

int main(int argc, char *argv[]){
    esempio struttura;
    struttura.valore1 = 10;
    struttura.valore2 = 12;
    struttura.stampa();
    cout << "somma: " << struttura.somma() << endl;

}