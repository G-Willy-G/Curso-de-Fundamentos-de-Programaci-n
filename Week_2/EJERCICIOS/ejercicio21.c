#include <stdio.h>
#include <string.h>

#define TAM 20  // Constant for the maximum size of the string

int main(void)
{
    char    texto[TAM]; // Array to store the input string
    int     longitud;   // Variable to store the length of the string

    longitud = 0;       // Initialize length

    // Prompt user for a string
    printf ("Introduzca el string: ");
    scanf ("%s", texto);
    
    // Calculate the current length of the string
    longitud = strlen(texto);

    // Truncate the string by removing the last character
    // We overwrite the last character (index length-1) with the null terminator '\0'
    texto[longitud - 1] = '\0';

    // Print the modified string
    printf ("El nuevo string es: %s", texto);

    return (0);
}