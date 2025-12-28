#include <stdio.h>

int main(void)
{
    char    letra;  // Variable to store the input character

    letra = '\0';   // Initialize variable

    // Prompt user for a character
    printf ("Introduce la letra a comprobar: ");
    scanf (" %c", &letra);

    // Check if the character is a vowel (uppercase or lowercase)
    if (letra == 'A' || letra == 'a' || 
        letra == 'E' || letra == 'e' || 
        letra == 'I' || letra == 'i' || 
        letra == 'O' || letra == 'o' || 
        letra == 'U' || letra == 'u')
    {
        printf ("La letra es una vocal");
    } 
    else 
    {
        printf ("La letra no es una vocal");
    }
    
    return (0);
}