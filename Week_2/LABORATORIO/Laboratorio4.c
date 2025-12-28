#include <stdio.h>

// Struct to store 3 long integers
typedef struct {
    long    entero[3];
} Enteros;

// Function to get numbers from the user
// Argument: Pointer to an 'Enteros' struct
void recogida_de_numeros(Enteros *p)
{
    // Array of strings to customize prompt for 1st, 2nd, 3rd number
    const char  *orden[] = {"primer", "segundo", "tercer"};
    int         buffer;
    int         i;

    // Safety check: Ensure the pointer is valid before accessing it
    if (p == NULL)
    {
        fprintf(stderr, "Error: Puntero no válido\n");
        return;
    }
    
    for (i = 0; i < 3; i++) {
        printf("Introduzca el %s número: ", orden[i]);
        
        // Read into the struct's array via pointer 'p'
        // Using strict checking for scanf return value
        if (scanf("%ld", &p->entero[i]) != 1) {
            fprintf(stderr, "Número introducido incorrecto, inténtalo de nuevo.\n");
            
            // Clean input buffer to consume invalid characters
            // Loops until newline or EOF is found
            while ((buffer = getchar()) != '\n' && buffer != EOF) ;
            
            i--; // Decrement index to retry current iteration
        }
    }
}

// Function to find and print the smallest number
void cual_es_menor(Enteros *p)
{
    long    menor;
    int     i;

    // Safety check for pointer validity
    if (p == NULL)
    {
        fprintf(stderr, "Error: Puntero no válido\n");
        return;
    }

    // Initialize 'menor' with the first element
    menor = p->entero[0];
    
    // Iterate through the rest of the array (indices 1 and 2)
    for (i = 1; i < 3; i++)
    {
        // If current element is smaller than 'menor', update 'menor'
        if (p->entero[i] < menor) 
            menor = p->entero[i];
    }

    // Print the smallest value found
    printf("El número %ld es el menor.\n", menor);
}

int main(void)
{
    Enteros numeros;    // Variable of type 'Enteros'

    // Pass address of 'numeros' to functions
    recogida_de_numeros(&numeros);
    cual_es_menor(&numeros);

    return (0);
}
