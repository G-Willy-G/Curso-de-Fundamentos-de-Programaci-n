#include <stdio.h>

// Define a constant for the maximum size of the array.
// This prevents magic numbers and makes the code easier to modify.
#define MAX_SIZE 10

int main(void) 
{
    // Declare loop counter variable.
    int i = 0;
    
    // Declare variable to store the user's desired number of elements to display.
    int number_of_elements;

    // Declare and initialize the array 'x' of type int with size MAX_SIZE.
    // The syntax '= {0}' initializes the first element to 0, and simpler terms, 
    // it forces the compiler to set all remaining elements to 0 as well.
    // This is the standard way to "zero out" an array in C.
    int x[MAX_SIZE] = {0};

    // Prompt the user for input.
    printf("CUANTOS NUMEROS QUIERES QUE SEAN MOSTRADOS: ");
    scanf("%d", &number_of_elements);

    // Validate the input to ensure we don't access memory outside the array bounds.
    // If the user asks for more than 10, limit it to MAX_SIZE.
    if (number_of_elements > MAX_SIZE) {
        printf("Limitando a %d elementos (tamaño maximo del array).\n", MAX_SIZE);
        number_of_elements = MAX_SIZE;
    }

    // Loop through the array from index 0 to number_of_elements - 1.
    while (i < number_of_elements) {
        // Print the value at the current index 'i'.
        // Since the array was initialized with {0} and we haven't changed values,
        // this will print '0' for every element.
        printf("%d ", x[i]);
        
        // Increment the loop counter.
        i++;
    }
    
    // Print a newline character for clean output formatting.
    printf("\n");

    return (0); // Return 0 to indicate successful program execution.
}