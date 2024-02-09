/*
file main base, con esempi riguardanti:
-struttura del main;
-variabili;
-input output;
-if, else, switch;
-cicli
*/

#include<iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){

//variabili classiche
int intero = 12;    //int definisce un numero intero
float virgola1 = 12.23;     //float definisce un numero con virgola
double virgola2 = 12.233434553;   //double definisce un numero con virgola in modo più preciso di un float (più cifre)
char carattere = 'a';   //char definisce un carattere

//array
int arrayIntero[3] = {1,2,3};   //un arary di 3 interi, accessibili chiamando la variabile e l'indirizzo
char parola[10] = "ciao";   //un arary di 10 caratteri


//cout
cout << "stampa a schermo" << endl; //permette di stampare a schermo determinate cose, con endl termina l'output con un a capo
cout << "la prima variabile è: " << intero << endl; //puoi stampare anche variabili

//cin
int valore;
cout << "inserisci un valore: " << endl;
cin >> valore;  //con cin è possibile inserire in delle variabili valori inseriti dall'utente
cout << valore << endl;


//if
int valore2;
cout << "inserisci un valore: " << endl;
cin >> valore2; 
cout << valore2 << endl;
//if viene utilizzato per verificare certe condizioni
if(valore2 > 10){   //se la condizione tra parentesi è vera allora esegue il codice seguente
    cout << "il valore " << valore2 <<" è maggiore di dieci" << endl;
}
/*
le varie condizioni sono:
- > (maggiore);
- < (minore);
- >= (maggiore uguale);
- <= (minore uguale);
- == (uguale);
- != (diverso);
*/

//else
//l'else viene utilizzato solo in seguito ad un if, esegue del codice se l'if che lo precede ha condizione falsa
if(valore2 > 10){   
    cout << "il valore " << valore2 <<" è maggiore di dieci" << endl;
}
else {
    cout << "il valore " << valore2 <<" è minore uguale di dieci" << endl;
}

//switch
//utile per evitare di annidare troppe if:

switch(valore2){    //tra parentesi va il valore da considerare
case 1: cout << "il valore è 1"; //se il valore è uguale a 1 esegue il codice
        break;  //necessario per evitare che lo switch provi anche i casi successivi
case 2: cout << "il valore è 2"; 
        break;
default: cout << "il valore non è 1 né 2"; //se non accadono le altre casistiche esegue questo codice 
}


//cicli
//while
int i;  //nome tipicamente utilizzato per variabili usate per il controllo dei cicli
i=0;
while(i<10){    //finché la condizione nel while è vera il programma che segue viene eseguito
    cout << i << endl;
    i++;  //uguale a fare i=i+1;
}

//do while
i=0;
do{    //identico al while ma con il controllo alla fine dell'esecuzione, non all'inizio
    cout << i << endl;
    i++;  //uguale a fare i=i+1;
}while(i<10);

//for
for(i=0;i<10;i++){  //for(inizializzazione; codizione; incremento/decremento)
    cout << i << endl;
}

/*
tipicamente:
- for, so quante volte va eseguito il codice;
- while, non so quante volte va eseguito il codice;
- while, non so quante volte va eseguito il codice, ma lo eseguo almeno una volta PEFFORZA (la prima);
*/

}

