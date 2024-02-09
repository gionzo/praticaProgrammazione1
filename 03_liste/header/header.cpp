#include "header.h"

/*
basta riscrivere le funzioni dichiarate nel file .h, con i metodi invece bisogna anche specificare 
il nome della struttura dalla quale sono state prese
*/

void esempio :: stampa(){  
    cout << "valore1: " << valore1 << " valore2: " << valore2 << endl;
}
int esempio :: somma(){
    return valore1 + valore2;
}

esempio :: esempio(){    
    valore1 = 0;
    valore2 = 0;
}
esempio :: esempio(int a){ 
    valore1 = a;
    valore2 = 0;
}
esempio :: esempio(int a, int b){
    valore1 = a;
    valore2 = b;
}
esempio :: ~esempio(){
    cout << "l'oggetto è stato distrutto" << endl;
}

void stampaSom(int a, int b){ //procedura che stampa la somma di due valori passati come parametri 
    cout << "somma: " << a+b << endl;
}

