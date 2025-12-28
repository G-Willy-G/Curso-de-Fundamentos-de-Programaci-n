#include <stdio.h>

#define MAX 10 // Maximum number of elements to display
#define MIN 1  // Minimum number of elements required

int main(void) 
{
    int i;
    long    numero;
    // Initialize the array with MAX elements, setting all to 0.
    // Using {0} initializes the first element to 0, which implicitly sets the rest to 0.
    long    array[MAX] = {0};

    numero = 0;

    // Use a do-while loop to validate user input.
    // This loop ensures the user enters a number between MIN and MAX.
    do {
        printf ("CUANTOS NUMEROS QUIERES QUE SEAN MOSTRADOS: ");
        // Read the input as a long integer.
        scanf ("%ld", &numero); // correct format specifier for long is %ld
    }
    while (numero < MIN || numero > MAX); // Repeat if number is out of bounds

    i = 0;
    // Loop to display the requested number of elements from the array.
    while (i < numero) {

        // Print the value at index i.
        // It will print '0' because the array was initialized to zeros.
        printf ("%ld ", array[i]); // correct format specifier for long is %ld
        i++;
    }
    
    // Print a newline for cleaner output formatting
    printf("\n");

    return (0); // Return success
}