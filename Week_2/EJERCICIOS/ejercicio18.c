#include <stdio.h>

#define TAM 100 // Defined constant for the maximum size of the string

int main(void)
{
    // Initialize a character array (string) with "Hello World"
    char    texto[TAM] = "Hello World";
    
    // Modify the character at index 5 (the space) to '0', I was asked for it
    texto[5] = '0';
    
    // Print the modified string
    printf ("%s", texto);
    
    return (0);
}