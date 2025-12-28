#include <stdio.h>

// Enum definition for supported currencies
typedef enum {
    dollar=1,   // 1
    yen,        // 2 (auto-increment)
    pound       // 3 (auto-increment)
} Currency;

int main(void)
{
    float   euro;       // Amount in euros to convert
    int     opccion;    // User selection

    // Initialize variables
    euro = 0;
    opccion = 0;

    // Prompt user for amount input
    printf ("Introduce la cantidad a euros que quieres cambiar: ");
    scanf ("%f", &euro);
    
    // Display menu and get user choice
    printf ("-----------------------\nOpcciones de intercambio:\n 1. Dollar\n 2. Japanese Yen\n 3. Pound Sterling\nSelecciona el numero de la opccion deseada: ");
    scanf ("%d", &opccion);

    // Cast integer choice to Currency enum for the switch
    switch ((Currency)opccion)
    {
        case dollar:
            // Convert to US Dollars
            printf ("Ha cambiado %.2f euros por %.2f dolares\n", euro, euro * 1.12);
            break;
        case yen:
            // Convert to Japanese Yen
            printf ("Ha cambiado %.2f euros por %.2f yenes\n", euro, euro * 124.56);
            break;
        case pound:
            // Convert to British Pounds
            printf ("Ha cambiado %.2f euros por %.2f libras\n", euro, euro * 0.86);
            break;
        default:
            // Handle invalid selection
            printf ("Ha introducido una opccion incorrecta\n");
            break;
    }
    return (0);
}