#include<iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){

FILE *fp; //dichiarazione di un puntatore ad un file
fp = fopen("nomefile.txt", "w"); //apre il file nomefile.txt in modalità w
/*
modalità:
-r (read);
-w (write, elimina tutto quello scritto precedentemente su tale file);
-a (append, scrive dalla fine del file, se ci sono altre cose scritte non elimina);
*/

//sarebbe meglio, prima di lavorare con il file, verificare che sia stato aperto correttamente:
if(fp != NULL){
    fprintf(fp, "3\n");
    fprintf(fp, "scrivere all'interno del file\n"); //fprintf(puntatorefile, output)
    fprintf(fp, "è possibile stampare variabili, interi: %d, stringhe %s, float %f ...\n", 5, "ciao", 2.3);

    fclose(fp); //chiudere il file quando non serve più
}

fp = fopen("nomefile.txt", "r");

if(fp != NULL){
    int val;
    fscanf(fp, "%d", &val); //fscanf serve per leggere dai file, fscanf(puntatorefile, tipo da leggere, &variabile)
    cout << val << endl;

    fclose(fp); //chiudere il file quando non serve più
}

}