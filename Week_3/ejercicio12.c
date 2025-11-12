#include <stdio.h>

#define TAM 100

int main () {

    int integral=0, array[TAM], cociente=0, i, longitud=0;

    printf ("Introduzca la integral que quiera pasar a binario: ");
    scanf ("%d", &integral);

    integral = cociente;

    for (i=0; cociente>=2; i++) {

        array[i] = cociente%2;
        cociente = cociente/2;
        longitud ++;
    }

    printf ("Numero en binario: ");

    for (i=0; i <= longitud; i++){
        printf ("%d", array[i]);

    }
    return 0;
}