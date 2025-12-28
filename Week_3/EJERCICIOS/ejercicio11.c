#include <stdio.h>

// Define a constant for the multiplication table limit.
// Tables usually go up to 10 (or 9 in the original code).
// We'll set it to 9 to match the original logic (i <= 9).
#define TABLE_LIMIT 9 

int main(void)
{
    // 'multiplicacion': Stores the number for which the table will be generated.
    long    multiplicacion;
    // 'i': Loop counter variable.
    long    i;

    // Initialize variables (good practice, though 'i' is set in the for loop).
    i = 0;
    multiplicacion = 0;

    // --- Input Phase ---
    // Prompt number from user.
    // Note: The prompt asks for a number between 1 and 9, but there is no explicit validation loop here.
    printf ("Seleccione un nunero del 1 al 9 del que quiera ver la tabla de multiplicar: ");
    scanf ("%ld", &multiplicacion);

    // --- Output Phase ---
    // Loop from 0 to TABLE_LIMIT (9) inclusive.
    // This will print the multiplication results for: number * 0, number * 1, ... , number * 9.
    for (i = 0; i <= TABLE_LIMIT; i++)
    {
        // Print the formatted string: " input x current_index = result "
        printf (" %ld x %ld = %ld\n", multiplicacion, i, multiplicacion * i);
    }

    return (0); // Return success.
}