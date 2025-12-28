#include <stdio.h>

#define MAX_BITS 100 // Maximum number of bits for the binary representation

int main(void)
{
    // Rename 'integral' to 'input_number' for clarity, but I will keep user's variable style if possible.
    // 'integral' likely meant 'integer' (entero).
    long    integral; 
    long    array[MAX_BITS] = {0}; // Array to store bits (0 or 1)
    long    cociente; // Changed from double to long. Modulo (%) requires integers.
    long    i;
    long    longitud;

    i = 0;
    longitud = 0;
    cociente = 0;
    integral = 0;

    // --- Input Phase ---
    printf ("Introduzca la integral que quiera pasar a binario: ");
    scanf ("%ld", &integral);

    cociente = integral;

    // --- Conversion Phase (Decimal to Binary) ---
    // We repeatedly divide by 2 and store the remainder (0 or 1).
    // The loop continues as long as quotient is greater than 0.
    // Note: This method generates bits in REVERSE order (Least Significant Bit first).
    i = 0;
    while (cociente > 0)
    {
        array[i] = cociente % 2; // Store the remainder (the bit)
        cociente = cociente / 2; // Update quotient for next iteration
        longitud++; // Keep track of how many bits we found
        i++;
    }

    // Special case: if input is 0, the loop doesn't run, but binary is 0.
    if (integral == 0) {
        printf("Numero en binario: 0\n");
        return (0);
    }

    // --- Output Phase ---
    printf ("Numero en binario: ");

    // We must print the array in REVERSE (from last index down to 0)
    // because the standard algorithm produces LSB first.
    // Start at 'longitud - 1' (the last bit added).
    i = 0;
    while (i < longitud)
    {
        printf ("%ld", array[i]);
        i++;
    }
    printf("\n"); // Newline for clean output

    return (0);
}