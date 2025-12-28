#include <stdio.h>
#include <string.h>

#define TAM 20  // Constant for the maximum size of the strings

int main(void)
{
    char    texto1[TAM], texto2[TAM];   // Arrays to store the input strings
    int     comparacion;                // Variable to store the result of the comparison

    // Prompt user for the first string
    printf ("Introduce un string: ");
    scanf ("%s", texto1);

    // Prompt user for the second string
    printf ("Introduce otro string: ");
    scanf ("%s", texto2);

    // Compare the two strings using strcmp
    // Returns 0 if equal, <0 if text1 < text2, >0 if text1 > text2
    // Note: The return value is the numeric difference between the first mismatching characters
    comparacion = strcmp(texto1, texto2); //The example in the web is incorrect
    
    // Output the result of the comparison
    printf ("El valor retornado por la comparacion de los strings es: %d", comparacion);

    return (0);
}