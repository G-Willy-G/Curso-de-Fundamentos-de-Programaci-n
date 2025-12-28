#include <stdio.h>

#define MAX 3   // Defined constant for the number of elements

// Function to request integers from the user
void peticion_de_enteros(long array[])
{
    long    i;

    // CRITICAL: Check if the pointer is NULL before accessing it.
    // Accessing a NULL pointer causes a segmentation fault (program crash).
    if (array == NULL)
    {
        fprintf(stderr, "Error: Array no válido\n");
        return;
    }
    
    for (i = 0; i < MAX; ++i)
    {
        printf("Introduce el termino Nº%ld: ", i + 1);
        // Validating scanf return value ensures we actually read an integer
        if (scanf("%ld", &array[i]) != 1)
        {
            fprintf(stderr, "Entrada inválida\n");
            // In a real program, you would clear the buffer or handle the error appropriately
        }
    }
}

// Function to compare the integers in the array
void comparacion_de_enteros(const long array[])
{
    // CRITICAL: Always validate pointers passed as arguments.
    // Even if we just checked it in the calling function, defensive programming
    // dictates we check it here too in case this function is reused elsewhere.
    if (array == NULL)
    {
        fprintf(stderr, "Error: Array no válido\n");
        return;
    }
    
    // Logic to verify equality of the three numbers
    if (array[0] == array[1] && array[1] == array[2])
    {
        printf("Los números son iguales\n");
    } 
    else if (array[0] != array[1] && array[0] != array[2] && array[1] != array[2])
    {
        printf("Los números son diferentes\n");
    } 
    else
    {
        printf("Dos números son iguales y el otro es distinto\n");
    }
}

int main(void)
{
    long    entero[MAX];    // Array to store inputs

    peticion_de_enteros(entero);
    comparacion_de_enteros(entero);

    return (0);
}