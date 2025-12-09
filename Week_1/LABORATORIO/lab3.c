#include <stdio.h>
int main (){

    int numero=0;
    char caracter;

    printf ("Por favor, introduce un numero (entre 1 y 5): ");
    scanf ("%d", &numero);

    printf ("Por favor, introduce un caracter: ");
    scanf ("\n%c", &caracter);

    printf ("The character '%c' with ASCII code %d, if it is encrypted with the number %d, would become the character '%c' with the ASCII code %d\n", caracter, caracter, numero, caracter + numero, caracter + numero);

    return 0;
}