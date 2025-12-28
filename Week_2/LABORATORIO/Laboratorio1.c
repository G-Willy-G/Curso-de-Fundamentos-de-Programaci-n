#include <stdio.h>
#include <stdlib.h> // for abs

#define TAM 3   // Array size for date components (day, month, year)

int main(void)
{
    int     cumple1[TAM];   // Array for first user's birthday
    int     cumple2[TAM];   // Array for second user's birthday
    
    // Prompt for the first user's birthday
    printf("Introduce la fecha de nacimiento del primer usuario (dd,mm,yyyy): ");
    
    // Check if input format corresponds to 3 integers separated by commas
    if (scanf("%d,%d,%d", &cumple1[0], &cumple1[1], &cumple1[2]) != 3) {
        // fprintf writes to stderr (Standard Error stream) instead of stdout.
        // This separates error messages from normal program output.
        // It allows users to pipe valid output to a file while still seeing errors on the screen.
        fprintf(stderr, "Entrada no válida para el primer usuario. Usa el formato dd,mm,yyyy\n");
        return (1); // Return error code
    }

    // Prompt for the second user's birthday
    printf("Introduce la fecha de nacimiento del segundo usuario (dd,mm,yyyy): ");
    
    // Check input format
    if (scanf("%d,%d,%d", &cumple2[0], &cumple2[1], &cumple2[2]) != 3) {
        fprintf(stderr, "Entrada no válida para el segundo usuario. Usa el formato dd,mm,yyyy\n");
        return (1); // Return error code
    }

    // Basic range validation for day (1-31) and month (1-12)
    if (cumple1[0] < 1 || cumple1[0] > 31 || cumple1[1] < 1 || cumple1[1] > 12 ||
        cumple2[0] < 1 || cumple2[0] > 31 || cumple2[1] < 1 || cumple2[1] > 12) {
        fprintf(stderr, "Día o mes fuera de rango (dd:1-31, mm:1-12)\n");
        return (1);
    }

    // Compare full dates (day, month, and year)
    if (cumple1[0] == cumple2[0] && cumple1[1] == cumple2[1] &&
        cumple1[2] == cumple2[2])
    {
        printf("¡Felicidades! Nacisteis el mismo día.\n");
    } 
    // Compare only day and month (same birthday, different year)
    else if (cumple1[0] == cumple2[0] && cumple1[1] == cumple2[1])
    {
        printf("Cumplís años el mismo día pero con %d años de diferencia.\n", abs(cumple1[2] - cumple2[2]));
    }
    // Dates are completely different
    else
    {
        printf("Tenéis cumpleaños diferentes.\n");
    }

    return (0);
}