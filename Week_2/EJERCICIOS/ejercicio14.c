#include <stdio.h>

// Macros for exchange rates
// Defining these here makes it easy to update rates globally without searching through code
#define dollar 1.12
#define yen 124.56
#define pounds 0.86

// Enum for readable currency selection
typedef enum {
    dolares=1,
    yennes,
    libras
} Currency;

int main(void)
{
    float   euros;      // Amount to convert
    long    opccion;    // User selection

    // Initialize variables
    euros = 0;
    opccion = 0;

    // Prompt user for amount
    printf (" Introduce la Cantidad de euros a intercambiar: ");
    scanf ("%f", &euros);
    
    // Display menu
    printf (" 1. Dolares\t 2. Yennes\t 3. Libras\n");
    printf ("Introduce el numero del tipo de intercambio: ");
    scanf ("%ld", &opccion);

    // Perform conversion using macros
    // Using macros ensures consistent values across the program
    switch ((Currency)opccion)
    {
    case dolares:
        printf ("Sus %.2f euros se transforman en %.2f dolares", euros, euros * dollar);
        break;
    case yennes:
        printf ("Sus %.2f euros se transforman en %.2f yenes", euros, euros * yen);
        break;
    case libras:
        printf ("Sus %.2f euros se transforman en %.2f libras", euros, euros * pounds);
        break;
    default:
        printf ("Has seleccionado una opcción incorrecta");
        break;
    }

    return (0);
}