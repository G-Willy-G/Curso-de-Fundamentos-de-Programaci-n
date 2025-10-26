#include <stdio.h>

typedef struct {
    int dividendo;
    int divisor;
    double cociente;
    double resto; 
} division;

int main ()

{
    division operadores;

    printf ("Introduce el dividendo: ");
    scanf ("%d", &operadores.dividendo);

    printf ("Introduce el divisor: ");
    scanf ("%d", &operadores.divisor);

    operadores.cociente = operadores.dividendo / operadores.divisor;
    operadores.resto = operadores.dividendo%operadores.divisor;

    printf ("El cociente es %.2lf y el resto %.2lf", operadores.cociente, operadores.resto);

    return 0;
}