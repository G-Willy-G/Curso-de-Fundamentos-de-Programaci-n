#include <stdio.h>

#define MAX 2   // Constant for the number of elements

typedef struct {
    long    enteros[MAX];   // Array to store long integers
} Numeros;

// Function to request numbers from the user
void peticion_de_numeros(Numeros *enteros)
{
    int     buffer; // Variable to hold characters during buffer clearing
    int     i;      // Loop counter
    
    printf("Introduzca %d números:\n", MAX);

    for (i = 0; i < MAX; i++) {
        printf("Número %d: ", i + 1);
        
        if (scanf("%ld", &enteros->enteros[i]) != 1) {
            
            // ERROR HANDLING: Using fprintf to print to stderr (Standard Error)
            // stderr is separate from standard output (stdout). 
            // This ensures error messages aren't redirected if the user redirects program output to a file.
            fprintf(stderr, "Número introducido incorrecto, inténtalo de nuevo.\n");
            
            /* BUFFER CLEARING:
             * When scanf fails, the invalid input remains in the buffer.
             * This loop reads character by character until it finds a newline ('\n') or EOF (End Of File).
             * Essentially, it "eats" the bad input so the next scanf can start fresh.
             */
            while ((buffer = getchar()) != '\n' && buffer != EOF) ;
            
            i--; // Decrement index to repeat this iteration and ask for the same number again.
        } else {
             // Successful read.
             // We also clear the buffer here to handle cases like "3F" or "3 4".
             // "3F" -> reads 3, 'F' remains. If we don't clear, next loop tries to read 'F' and fails.
             // "3 4" -> reads 3, ' 4' remains. Safe to clear if we want 1 input per line prompt.
            while ((buffer = getchar()) != '\n' && buffer != EOF) ;
        }
    }
}

// Function to check if numbers are even or odd
void comprobacion_de_numeros(const Numeros *enteros)
{
    const char  *par = "par";
    const char  *impar = "impar";
    int         i;

    for (i = 0; i < MAX; i++) {
        // TERNARY OPERATOR EXPLANATION:
        // Syntax: (condition) ? value_if_true : value_if_false
        // logic:
        // 1. (enteros->enteros[i] % 2 == 0) -> Check if number is divisible by 2.
        // 2. ? par -> If true, evaluate to "par".
        // 3. : impar -> If false, evaluate to "impar".
        // The result string is then passed to printf via %s.
        printf("El número %ld es %s.\n", enteros->enteros[i], (enteros->enteros[i] % 2 == 0) ? par : impar);
    }
}

int main(void)
{
    Numeros enteros;    // Variable of type Numeros

    peticion_de_numeros(&enteros);
    comprobacion_de_numeros(&enteros);

    return (0);
}