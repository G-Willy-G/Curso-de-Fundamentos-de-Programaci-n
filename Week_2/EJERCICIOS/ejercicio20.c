#include <stdio.h>
#include <string.h>

#define TAM 20  // Constant for the maximum size of the strings

int main(void)
{
    char    texto1[TAM], texto2[TAM];   // Arrays to store the input and copied strings
    int     comparacion;                // Variable to store the comparison result

    // Prompt user for a string
    printf ("Introduce un string: ");
    scanf ("%s", texto1);

    // Copy the content of texto1 into texto2
    strcpy(texto2, texto1);
    
    // Compare the two strings
    // Since texto2 is a copy of texto1, the result should be 0 (identical)
    comparacion = strcmp(texto1, texto2);
    
    // Output the result of the comparison
    printf ("El valor numero de la comparacion es: %d", comparacion);

    return (0);
}