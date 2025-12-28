#include <stdio.h>

int main(void)
{
    float   euro;       // Variable to store the amount in Euros
    int     opccion;    // Variable to store the user's menu choice

    // Initialize variables (good practice)
    euro = 0;
    opccion = 0;

    // Prompt user for the amount in Euros
    printf ("Introduce la cantidad a euros que quieres cambiar: ");
    scanf ("%f", &euro);
    
    // Display menu options and get user selection
    printf ("-----------------------\nOpcciones de intercambio:\n 1. Dollar\n 2. Japanese Yen\n 3. Pound Sterling\nSelecciona el numero de la opccion deseada: ");
    scanf ("%d", &opccion);

    // Perform conversion based on the selected option
    switch (opccion)
    {
        case 1:
            // Convert to US Dollars
            printf ("Ha cambiado %.2f euros por %.2f dolares\n", euro, euro * 1.12);
            break;
        case 2:
            // Convert to Japanese Yen
            printf ("Ha cambiado %.2f euros por %.2f yenes\n", euro, euro * 124.56);
            break;
        case 3:
            // Convert to British Pounds
            printf ("Ha cambiado %.2f euros por %.2f libras\n", euro, euro * 0.86);
            break;
        default:
            // Handle invalid menu selection
            printf ("Ha introducido una opccion incorrecta\n");
            break;
    }

    return (0);
}