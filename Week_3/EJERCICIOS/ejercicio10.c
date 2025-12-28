#include <stdio.h>

#define MAX 100 // Maximum number of elements allowed
#define MIN 2   // Minimum number of elements required

int main(void)
{
    // Declare variables
    double    array[MAX] = {0}; // Array to store input numbers (type double)
    long      cantidad_de_numeros; // Variable to store how many numbers user wants
    long      status; // Variable to check scanf return value
    long      i;      // Loop counter
    long      menor;  // Variable to track the minimum value found
    long      mayor;  // Variable to track the maximum value found

    // --- Input Phase: Get Quantity ---
    // Loop until user provides a valid quantity between MIN and MAX.
    do {
        printf("Introduce la cantidad de numeros: ");
        status = scanf("%ld", &cantidad_de_numeros);

        // Robust validation: check if scanf read a number successfully.
        if (status != 1) {
            // Clear input buffer to handle non-numeric input.
            while (getchar() != '\n');
            cantidad_de_numeros = 0; // Reset to force loop continuation
            printf("Error: Entrada no valida. Por favor introduce un numero entre %d y %d.\n", MIN, MAX);
        }
    } while (cantidad_de_numeros < MIN || cantidad_de_numeros > MAX);

    // --- Input Phase: Get Numbers and Find Min/Max ---
    i = 0;
    while (i < cantidad_de_numeros)
    {
        printf("Introduce el numero %ld/%ld: ", i + 1, cantidad_de_numeros);
        // Read a double precision number.
        status = scanf ("%lf", &array[i]);

        // Validate input
        if (status != 1) {
            while (getchar() != '\n'); // Clear buffer
            i--; // Decrement counter to retry this index
            printf("Error: Entrada no valida. Por favor introduce un numero entre %d y %d.\n", MIN, MAX);
        }
        
        // Initialize min/max with the first valid number entered.
        if (i == 0) {
            menor = array[i]; // potential type conversion double -> long
            mayor = array[i]; // potential type conversion double -> long
        }
        
        // Check if current number is smaller than current minimum.
        if (array[i] < menor) {
            menor = array[i];
        }
        
        // Check if current number is larger than current maximum.
        if (array[i] > mayor) {
            mayor = array[i];
        }
        i++;
    }

    // --- Output Phase ---
    // Print the results.
    printf("El menor numero es: %ld\n", menor);
    printf("El mayor numero es: %ld\n", mayor);

    return (0);
}