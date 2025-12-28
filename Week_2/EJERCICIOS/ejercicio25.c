#include <stdio.h>

// Struct to group division components
typedef struct {
    int     dividendo;  // Dividend (numerator)
    int     divisor;    // Divisor (denominator)
    double  cociente;   // Quotient result
    double  resto;      // Remainder result
} division;

int main(void)
{
    division operadores;    // Variable of type 'division'

    // Prompt user for the dividend
    printf ("Introduce el dividendo: ");
    scanf ("%d", &operadores.dividendo);

    // Prompt user for the divisor
    printf ("Introduce el divisor: ");
    scanf ("%d", &operadores.divisor);

    // Perform division
    // We cast the dividend to (double) to force floating-point division.
    // Rule: If at least one operand is a double, the other is implicitly promoted to double.
    // So, (double)int / int becomes double / double.
    operadores.cociente = (double)operadores.dividendo / operadores.divisor;
    
    // Calculate the remainder (modulus)
    operadores.resto = operadores.dividendo % operadores.divisor;

    // Output the results
    printf ("El cociente es %.2lf y el resto %.2lf", operadores.cociente, operadores.resto);

    return (0);
}