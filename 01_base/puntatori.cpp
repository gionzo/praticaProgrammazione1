#include<iostream>
#include <cstdlib>

using namespace std;
int main(int argc, char *argv[]){

int valore = 10;
int *indirizzo;   //dichiarando una variabile preceduta da un * dichiari una variabile indirizzo, puntatore
//un puntatore è una speciale variabile che contiene l'indirizzo di un'altra variabile
indirizzo = &valore;    //così facendo assegni l'indirizzo di valore (&valore) all'interno della variabile indirizzo

cout << "il valore è: " << valore << " e ha indirizzo: " << indirizzo << endl;

//possiamo indicare il valore puntato dall'indirizzo con la seguente scrittura:
cout << "il puntatore: " << indirizzo << " punta il valore: " << *indirizzo << endl;

//ciò sarà utile più avanti specialmente per le liste
}