#include <stdio.h>

#define MAX 10 // Constant for the maximum number of elements

int main(void)
{
    // Initialize array to zeros.
    // 'i' tracks the current index.
    // 'status' tracks the return value of scanf for validation.
    long    array[MAX] = {0};
    long    i;
    int     status;

    i = 0;
    status = 0;

    // --- Input Phase ---
    // Read numbers until user enters 0 or array is full.
    do {
        printf("Introduce un numero (0 para terminar): ");
        status = scanf("%ld", &array[i]);
        i++; // Increment index immediately after read attempt
        
        // Check if input was valid (numeric)
        if (status != 1) {
            // Clear buffer if invalid input found
            while (getchar() != '\n');
            i--; // Revert index increment to retry this slot
            printf("Error: Entrada no valida. Por favor introduce un numero.\n");
        }
    // Continue loop while:
    // 1. The last successfully stored number (array[i-1]) is NOT 0.
    // 2. We haven't exceeded MAX capacity.
    } while (array[i - 1] != 0 && i < MAX);

    // If loop stopped because we hit MAX capacity, warn the user.
    if (i == MAX)
    {
        printf("Numero maximo de numeros alcanzados. Continuando...\n");
    }

    // --- Output Phase ---
    printf("Numeros introducidos en orden inverso: ");

    // Print elements in reverse order.
    // Start from the last valid index and go down to 0.
    // Note: This prints array[i-1], so it prints the recently entered numbers first.
    while (i > 0)
    {
        printf("%ld ", array[i - 1]);
        i--;
    }
    printf("\n");

    return (0);
}