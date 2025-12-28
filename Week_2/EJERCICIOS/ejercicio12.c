#include <stdio.h>

int main(void)
{
    char    letra;  // Variable to store the input character

    letra = '\0';   // Initialize variable

    // Prompt user for a letter
    printf ("Introduce la letra que deseas transformar: ");
    scanf ("%c", &letra);

    // Check if the character is uppercase (ASCII 65-90)
    if (letra >= 'A' && letra <= 'Z')
    {
        // Convert to lowercase by adding 32
        printf ("La letra transformada es: %c", letra + 32);
    } 
    // Check if the character is lowercase (ASCII 97-122)
    else if (letra >= 'a' && letra <= 'z')
    {
        // Convert to uppercase by subtracting 32
        printf ("La letra transformada es: %c", letra - 32);
    } 
    else 
    {
        // Handle invalid input (not a letter)
        printf ("No se ha introducido una letra valida");
    }

    return (0);
}