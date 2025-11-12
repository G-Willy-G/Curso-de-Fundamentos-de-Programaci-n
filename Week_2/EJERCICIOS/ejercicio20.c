#include <stdio.h>
#include <string.h>

#define TAM 20

int main ()

{
    char texto1[TAM], texto2[TAM];
    int comparacion;

    printf ("Introduce un string: ");
    scanf ("%s", texto1);

    strcpy (texto2,texto1);
    comparacion = strcmp (texto1,texto2);
    printf ("El valor numero de la comparacion es: %d", comparacion);


    return 0;
}