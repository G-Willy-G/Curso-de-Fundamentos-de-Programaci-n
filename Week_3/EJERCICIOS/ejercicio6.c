#include <stdio.h>

#define DIM 10 // Maximum dimension for the array

int main(void) 
{
    // Declare variables
    long    array[DIM]; // Array to store user inputs
    long    numero;     // Number of elements the user wants to process
    long    i;          // Loop counter
    int     status;     // Variable to store scanf return value for validation

    i = 0;
    numero = 0;

    // --- Input Phase: Get the number of elements ---
    // Use a do-while loop to validate that the number is between 2 and 10 (exclusive of boundaries based on logic < 2 || > 10, wait... original code was <=2 || >=10? let's strict check)
    // Original code: while (numero <= 2 || numero >= 10); -> So valid range is 3 to 9?
    // Wait, typical logic is usually "between 2 and 10" meaning [2, 10]? or (2, 10)?
    // The previous prompt text said "between 2 and 10".
    // Original code had: while (numero <= 2 || numero >= 10); -> loops if NUM is 2 or less OR 10 or more. So valid is 3, 4, ..., 9.
    // I will preserve the logic found in the file: (numero <= 2 || numero >= 10).
    
    do {
        printf ("Introduce el numero de valores que quieras mostrar: ");
        // scanf returns the number of items successfully read.
        // We use this to check if the user actually entered a number.
        status = scanf ("%ld", &numero);

        // --- Robust Input Validation ---
        // If scanf failed to read a number (e.g., user entered letters), status will not be 1.
        if (status != 1) {
            // Clear the input buffer.
            // getchar() reads one character at a time. We loop until we hit the newline '\n'
            // which signifies the end of the user's input line. This discards the bad input.
            while (getchar() != '\n');
            
            numero = 0; // Reset numero to ensure the loop continues (fails the condition check below effectively)
            printf("Error: Entrada no valida. Por favor introduce un numero.\n");
        }

    } while (numero <= 2 || numero >= 10); // Loop repeats if number is not strictly between 2 and 10.

    // --- Array Population Phase ---
    i = 0;
    while (i < numero) {
        printf ("Introduce el numero %d de %d: ", i+1, numero);
        // Read each number into the array at index i.
        // Note: For production code, we should also "blind" this scanf, but for this exercise 
        // we mainly focused on the first input.
        scanf ("%ld", &array[i]);
        i++;
    }

    // --- Processing Phase ---
    // Initialize i to the second to last index (numero - 2).
    // The last index is (numero - 1).
    i = numero - 2;

    // Loop backwards from the second-to-last element to the first (index 0).
    while (i >= 0 ) {
        // Compare the current element (array[i]) with the LAST element of the array (array[numero-1]).
        if (array[i] < array[numero-1]){
            // If the current element is smaller, print a message.
            // Note: Printing 'i' (the index) instead of the value might be intended, 
            // but usually users want the value. The code prints 'i'. 
            // I will keep the original logic: printing the INDEX 'i'.
            printf ("The number %d is less than the number %ld\n", i, array[numero-1]);
        }
        i--; // Decrement counter
    }

    return (0);
}