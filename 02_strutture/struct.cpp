/*
le strutture vengono usate per dichiarare variabili singoli contenenti differenti valori 
anche ti tipi diversi tra loro
*/

#include<iostream>
#include <cstdlib>
using namespace std;

typedef struct scuola{
    char nome[20];
    char città[20];
}scuola;

typedef struct persona{
    char nome[20];
    char cognome[20];
    int eta;
    scuola s;
}persona;

int main(int argc, char *argv[]){
    persona mario;
    mario.eta= 30;    //per assegnare i valori alle differenti variabili della variabile tipo struttura usiamo la dot notation
    strcpy(mario.nome, "mario");    //strcpy copia la seconda stringa inserita nella prima, = non basta
    strcpy(mario.cognome, "doccia"); 

    scuola s1;
    strcpy(s1.nome, "lceo puppa");

    mario.s = s1;
}