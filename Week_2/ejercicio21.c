#include <stdio.h>
#include <string.h>
#define TAM 20

int main ()
{
    char texto[TAM];
    int longitud;

    printf ("Introduzca el string: ");
    scanf ("%s", texto);
    
    longitud = strlen (texto);
    texto[longitud-1] = 0;

    printf ("El texto truncado es: %s", texto);


    return 0;
}