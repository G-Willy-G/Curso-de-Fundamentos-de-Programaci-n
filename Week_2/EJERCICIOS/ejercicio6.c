#include <stdio.h>

int main(void) 
{
    float   euros;      // Variable to store the amount in Euros
    char    opccion;    // Variable to store the user's currency choice

    // Initialize variables
    euros = 0;
    opccion = '\0';

    // Prompt user for the amount in Euros
    printf ("Introduce la cantidad a Convertir: ");
    scanf ("%f", &euros);

    // Display menu and prompt user for target currency
    printf ("Conversiones posibles: \n{D} Dollar\t {Y} Yen\t {P} Pound \nEscribe la letra de la moneda a la que deseas convertir la cantidad: ");
    scanf (" %c", &opccion);

    // Perform conversion based on user choice (case-insensitive)
    switch (opccion)
    {
        // Handle both uppercase and lowercase inputs
        case 'D':
        case 'd':
            // Convert to Dollars
            printf ("La cantidad Convertida a dolares es %.2f\n", euros * 1.12);
            break;
        case 'Y':
        case 'y':
            // Convert to Yen
            printf ("La cantidad Convertida a yenes es %.2f\n", euros * 124.56);
            break;
        case 'P':
        case 'p':
            // Convert to Pounds
            printf ("La cantidad Convertida a pound es %.2f\n", euros * 0.86);
            break;
        default:
            // Handle invalid input
            printf ("La opccion introducida es incorrecta\n");
            break;
    }
    return (0);
}