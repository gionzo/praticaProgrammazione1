#ifndef __HEADER__
#define __HEADER__

#include<iostream>
#include <cstdlib>
using namespace std;

typedef struct esempio{
    int valore1;
    int valore2;

    void stampa();
    int somma();
    esempio();
    esempio(int a);
    esempio(int a, int b);
    ~esempio();
}esempio;

void stampaSom(int a, int b); //solo l'header della procedura
 //procedura che stampa la somma di due valori passati come parametri 

#endif 
