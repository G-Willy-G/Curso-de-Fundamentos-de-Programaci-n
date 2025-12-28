#include <stdio.h>

#define STRING_LONG 5   // Size for the input strings (4 chars + null terminator)
#define ARRAY_LONG 4    // Size for the difference array

int main(void)
{
    char    texto1[STRING_LONG];    // Array for first string
    char    texto2[STRING_LONG];    // Array for second string
    int     diferencia[ARRAY_LONG]; // Array to store differences

    // Prompt user for first string
    printf ("Introduce el primer string: ");
    scanf ("%s", texto1);
    
    // Prompt user for second string
    printf ("Introduce el segundo string: ");
    scanf ("%s", texto2);

    // Calculate ASCII difference for the first 4 characters
    diferencia[0] = texto1[0] - texto2[0];
    diferencia[1] = texto1[1] - texto2[1];
    diferencia[2] = texto1[2] - texto2[2];
    diferencia[3] = texto1[3] - texto2[3];

    // Print the results
    printf ("La diferencia entre cada caracter de ambos strings son: %d, %d, %d y %d", 
            diferencia[0], diferencia[1], diferencia[2], diferencia[3]);

    return (0);
}
