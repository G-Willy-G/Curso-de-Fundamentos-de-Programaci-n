#include <stdio.h>
#include <string.h>
#define TAM 20

int main ()

{
    char texto1[TAM], texto2[TAM];
    int comparacion;

    printf ("Introduce un string: ");
    scanf ("%s", texto1);

    printf ("Introduce otro string: ");
    scanf ("%s", texto2);

    comparacion = strcmp (texto1,texto2);
    
    printf ("El valor retornado por la comparacion de los strings es: %d", comparacion);

    return 0;
}