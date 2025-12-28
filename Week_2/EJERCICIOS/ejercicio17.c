#include <stdio.h>

#define TAM 3   // Constant for the size of the array dimensions (rows and cols)

int main(void)
{
    // Matrix to store dates:
    // Row 0: First date
    // Row 1: Second date
    // Row 2: Difference between dates
    int fechas[TAM][TAM];

    // Prompt user for the first date
    printf ("Introduce el dia: ");
    scanf ("%d", &fechas[0][0]);
    printf ("Introduce el mes: ");
    scanf ("%d", &fechas[0][1]);
    printf ("Introduce el año: ");
    scanf ("%d", &fechas[0][2]);

    // Prompt user for the second date
    printf ("Introduce otro dia: ");
    scanf ("%d", &fechas[1][0]);
    printf ("Introduce otro mes: ");
    scanf ("%d", &fechas[1][1]);
    printf ("Introduce otro año: ");
    scanf ("%d", &fechas[1][2]);

    // Calculate the difference for each component (Day, Month, Year)
    fechas[2][0] = fechas[0][0] - fechas[1][0];
    fechas[2][1] = fechas[0][1] - fechas[1][1];
    fechas[2][2] = fechas[0][2] - fechas[1][2];
    
    // Output the results
    printf ("The difference in days is: %d\n", fechas[2][0]);
    printf ("The difference in moths is: %d\n", fechas[2][1]);
    printf ("The difference in years is: %d\n", fechas[2][2]);

    return (0);
}