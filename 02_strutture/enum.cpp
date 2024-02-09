/*
le strutture enumerative sono strutture contenenti diversi valori assegnati a 0, 1, 2, 3...
*/

#include<iostream>
#include <cstdlib>
using namespace std;

typedef enum sport{NUOTO, TENNIS, BASKET}sport;

typedef enum coloreP{MAGENTA, CIANO, GIALLO}coloreP;

int main(int argc, char *argv[]){

sport sport1;   //creo una variabile di tipo sport e la chiamo sport1
coloreP col1;   //creo una variabile di tipo coloreP e la chiamo col1

sport1 = NUOTO;
col1 = CIANO;

cout << "sport n: " << sport1 << " colore n: " << col1 << endl;

}