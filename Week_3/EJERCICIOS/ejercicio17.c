#include <stdio.h>

int main(void)
{
    // Variables definition
    long    i;          // Outer loop counter
    long    j;          // Inner loop counter for power calculation
    long    a;          // First term of the series
    long    potencia;   // Stores the value of r^i for the current term
    long    max;        // Number of terms to calculate
    long    suma;       // Accumulator for the total sum
    long    r;          // Common ratio (radio)

    // Variable initialization
    i = 0;
    j = 0;
    a = 0;
    r = 0;
    max = 0;
    potencia = 0;
    suma = 0;

    // --- Input Phase ---
    printf("Introduce el primer termino de la serie: ");
    scanf("%ld", &a);

    printf("Introduce el radio: ");
    scanf("%ld", &r);

    printf("Introduce la cantidad de terminos: ");
    scanf("%ld", &max);

    // --- Calculation Phase ---
    // Iterate from 0 to max-1 to calculate each term of the geometric series.
    for (i = 0; i < max; i++)
    {
        // Calculate r^i manually using a loop.
        // Initialize power to 1 (for the case i=0 or before multiplication).
        for (j = 0, potencia = 1; j < i; j++)
        {
            potencia *= r;
        }
        
        // Add the term (a * r^i) to the total sum.
        suma += a * potencia; 
    }
    
    // --- Output Phase ---
    printf("La suma de los primeros %ld terminos es: %ld\n", max, suma);
    
    return (0);
}
