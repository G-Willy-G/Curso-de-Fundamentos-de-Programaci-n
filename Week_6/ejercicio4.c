#include <stdio.h>

#define DIM 20

int main () {

    int longitud=0;
    char texto[DIM], *p;

    printf ("Introduce la cadena de texto: ");
    scanf ("%s", texto);

    for (p=texto; *p; p++) {
        longitud++;
    }

    printf ("La cadena de texto (%s) tiene una longitud de %d", texto, longitud);


    return 0;
}