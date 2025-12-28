#include <stdio.h>

#define MAX 10 // Maximum size for the array (though only index 0 is effectively used here)

int main(void)
{
    // Declare variables
    long    i;          // Index variable (note: never incremented in the loop)
    long    array[MAX] = {0}; // Array to store input (initialized to 0)
    long    status;     // Variable to capture scanf return value
    long    positivo;   // Counter for positive numbers
    long    negativo;   // Counter for negative numbers
    long    suma;       // variable to store the sum of positive numbers

    // Initialize counters and accumulators
    positivo = 0;
    negativo = 0;
    suma = 0;
    i = 0;

    // --- Input Processing Loop ---
    // Do-while loop to read inputs.
    // The loop continues while 'i' is less than 10 AND the last entered value is not 0.
    do
    {
        printf("Introduce un numero: ");
        // Read integer into the current array position.
        status = scanf("%ld", &array[i]);
        
        // --- Robust Validation ---
        // Check if scanf failed to read a valid number.
        if (status != 1)
        {
            // Clear input buffer to remove invalid characters.
            while (getchar() != '\n');
            
            // Decrement index (Note: if i is 0, this makes it -1, which can be dangerous).
            i--;
            printf("Error: Entrada no valida. Por favor introduce un numero.\n");
        }

        // --- Logic to Process the Number ---
        // Check if the input is positive
        if (array[i] > 0)
        {
            positivo++;       // Increment positive counter
            suma += array[i]; // Add to sum
        }
        // Check if the input is negative
        else if (array[i] < 0)
        {
            negativo++;       // Increment negative counter
        }
        
        // Note: 'i' is not incremented here, so we stick to array[0].
        // This acts like a single variable system rather than storing history.
        
    } while (i < 10 && array[i] != 0); 
    // Loop terminates if user enters 0 or condition fails.

    // --- Output Phase ---
    // Print total numbers read (negatives + positives).
    printf("\nHan sido leidos %ld numeros en total\n", negativo + positivo);
    
    // Print total negative numbers.
    printf("Han sido leidos %ld numeros negativos\n", negativo);
    
    // Print sum of positive numbers.
    printf("La suma de los numeros positivos es: %ld\n", suma);

    return (0);
}