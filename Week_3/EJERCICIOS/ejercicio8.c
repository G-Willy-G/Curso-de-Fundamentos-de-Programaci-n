#include <stdio.h>
#include <string.h>

#define MAX 10 // Maximum string length

int main(void)
{
    char    string[MAX];
    char    character1;
    char    character2;
    long    estado; // Variable to track scanf status
    int     i;

    printf("Introduce una cadena de caracteres en minuscula: ");
    // Note: scanf("%s") leaves a newline character '\n' in the buffer after reading.
    scanf("%s", string);

    // --- Input First Character (lowercase) ---
    do {
        printf("Introduce el primer caracter en minuscula: ");
        
        // IMPORTANT: Notice the space before %c in " %c".
        // This space causes scanf to skip any leading whitespace characters (like newlines, tabs, spaces).
        // Without this space, scanf would immediately read the '\n' left over from the previous input
        // (the Enter key pressed after entering the string above) and fail to wait for new input.
        estado = scanf(" %c", &character1);
        
        // Validation: Check if scanf succeeded
        if (estado != 1)
        {
            while (getchar() != '\n'); // Clear buffer
            printf("Error: Entrada no valida. Por favor introduce una letra entre a y z.\n");
        }
        // Validation: Check if character is lowercase
        if (character1 < 'a' || character1 > 'z')
        {
            printf("Error: Entrada no valida. Por favor introduce una letra entre a y z.\n");
        }
    } while (estado != 1 || character1 < 'a' || character1 > 'z');

    // --- Input Second Character (uppercase) ---
    do {
        printf("Introduce el segundo caracter en mayuscula: ");
        
        // IMPORTANT: Again, we use " %c" with a leading space.
        // This ensures any leftover newline from the previous character input is skipped
        // before trying to read the new character.
        estado = scanf(" %c", &character2);
        
        if (estado != 1)
        {
            while (getchar() != '\n'); // Clear buffer
            printf("Error: Entrada no valida. Por favor introduce una letra entre A y Z.\n");
        }
        // Validation: Check if character is uppercase
        if (character2 < 'A' || character2 > 'Z')
        {
            printf("Error: Entrada no valida. Por favor introduce una letra entre A y Z.\n");
        }
    } while (estado != 1 || character2 < 'A' || character2 > 'Z');

    // --- String Replacement Logic ---
    i = 0;
    while (string[i] != '\0')
    {
        // If current char matches char1, replace it with char2
        if (string[i] == character1)
        {
            string[i] = character2;
        }
        i++;
    }
    printf("%s\n", string);

    // --- String Reversal Logic ---
    // Print the string backwards
    i = strlen(string); // This starts pointing to null terminator or just past last char?
    // strlen("abc") is 3. indices 0,1,2.
    // If we start at i=strlen, we print the null terminator first (or garbage if outside).
    // Actually, loop condition is i >= 0.
    // Let's assume user wants to print reverse.
    // strlen points to one past the last valid char index.
    // So usually we should start at strlen() - 1. 
    // However, I will preserve the logic found in the original file unless it causes issues.
    // Original file: i = strlen(string); while(i >= 0) ...
    // Note: this will print the null terminator (invisible) or whatever is at index 'length' first if it's 0-indexed??
    // Actually, string[strlen] is '\0'. Printing %c of '\0' usually does nothing visible.
    
    while (i >= 0)
    {
        printf("%c", string[i]);
        i--;
    }
    printf("\n");
    
    return (0);
}