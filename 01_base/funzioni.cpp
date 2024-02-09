/*
Le funzioni sono porzioni di codice poste fuori dal main, sono utli per utilizzare
del codice più volta senza doverlo PEFFORZA risrivere
*/

#include<iostream>
#include <cstdlib>

using namespace std;

//procedure
//le procedure sono speciali tipi di funzioni che non restituiscono nulla:

void procedura(){    //void è la parola chiave per le procedure
    cout << "la procedura è stata chiamata" << endl;
}

int funzione1(){    //la prima parola della riga è il tipo della variabile che verrà restituita in output, seguita dal nome della funzione
    cout << "la funzione è stata chiamata" << endl;
    return 0; //la funzione ritorna 0
}

int funzione2(int valore){ //la funzione riceve un parametro, int valore, un valore fornito alla chiamata della funzione nel main
    cout << "la funzione è stata chiamata con parametro: " << valore << endl;
    return valore; //la funzione ritorna 0
}

int main(int argc, char *argv[]){

    procedura();    //per chiamare una procedura basta scrivere il suo nome seguito da delle parentesi

    int valore1;
    valore1 = funzione1(); //le funzioni vanno chiamate come le procedure, ma inserendo l'output in una variabile o stampandolo direttamente

    int valore2;    
    valore2 = funzione2(5); //per fornire i parametri richiesti da una funzione è sufficiente inserire i valori tra parentesi (senza specificare il tipo)
}