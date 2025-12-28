#include <stdio.h>

#define MAX 10 // Maximum capacity for the arrays

int main(void) {
    long    numero;         // The total number of inputs the user wants to enter
    long    temp;           // Temporary variable to hold the current input
    long    pares [MAX] = {0};   // Array to store even numbers
    long    impares [MAX] = {0}; // Array to store odd numbers
    
    // Loop counters and status variables
    int     i;
    int     status; 
    
    // Counters to track the *actual* number of elements added to each array.
    // Unlike using the main loop index 'i', these allow us to pack the arrays densely,
    // meaning no empty zeros in between valid numbers.
    int     contador_pares;
    int     contador_impares;

    // Initialize variables
    contador_pares = 0;
    contador_impares = 0;
    numero = 0;
    status = 0;

    // --- Input Phase: Get Total Count ---
    // Do-while loop with robust input validation to ensure count is between 1 and 10.
    do {
        printf ("Introduce un numero: ");
        status = scanf ("%ld", &numero);
        
        // Check if scanf failed (e.g., user entered non-numeric input)
        if (status != 1) {
            // Clear the input buffer by reading until newline
            while (getchar () != '\n');
            numero = 0; // Reset numero to ensure loop continues
            printf ("Error: Entrada no valida. Por favor introduce un numero.\n");
        }
    } while (numero < 1 || numero > 10);

    // --- Processing Phase: Read and Classify Numbers ---
    i = 0;
    while (i < numero) {
        printf ("Introduce el numero %d de %ld: ", i + 1, numero);
        status = scanf ("%ld", &temp);
        
        // Robust validation for each entered number
        if (status != 1) 
        {
            while (getchar () != '\n'); // Clear buffer
            printf ("Error: Entrada no valida. Por favor introduce un numero.\n");
            // Decrement 'i' to retry this specific index iteration
            i--; 
        }
        else
        {
            // If input is valid, classify as Even or Odd
            if (temp % 2 == 0) 
            {
                // Number is Even. Store at the next available slot in 'pares'.
                // Use 'contador_pares' as the index.
                pares[contador_pares] = temp;
                contador_pares++; // Increment the count of evens
            } 
            else
            {
                // Number is Odd. Store at the next available slot in 'impares'.
                // Use 'contador_impares' as the index.
                impares[contador_impares] = temp;
                contador_impares++; // Increment the count of odds
            }
        }
        i++; // Move to the next input iteration
    }

    // --- Output Phase: Even Numbers ---
    i = 0;
    printf ("Pares: ");
    // Loop only up to 'contador_pares' because that's how many even numbers we have.
    while (i < contador_pares)
    {
        printf ("%ld ", pares[i]);
        i++;
    }

    printf ("\n");

    // --- Output Phase: Odd Numbers ---
    i = 0;
    printf ("Impares: ");
    // Loop only up to 'contador_impares'.
    while (i < contador_impares)
    {
        printf ("%ld ", impares[i]);
        i++;
    }

    printf ("\n");

    return (0);
}
