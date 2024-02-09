/*
tramite i file header è possibile dividere un singolo programma in tre file:
-main.cpp contenente il main
-header.h contenente gli header delle funzioni e dei metodi, e le strutture stesse
-header.cpp contenente i corpi di funzioni e header*/

#include "header.h"

int main(int argc, char *argv[]){

esempio struttura(2,3);
struttura.stampa();
stampaSom(struttura.valore1,struttura.valore2);

}