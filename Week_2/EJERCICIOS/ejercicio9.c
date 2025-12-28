#include <stdio.h>

int main(void)
{
    long    year;   // Variable to store the year

    year = 0;       // Initialize year

    // Prompt user to enter a year
    printf ("Introduce el año que quieres comprobar si es bisiestro: ");
    scanf ("%ld", &year);

    // Check if the year is a leap year 
    // Logic: Divisible by 4 AND (NOT divisible by 100 OR divisible by 400)
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) 
    {
        printf ("El año seleccionado es bisiestro");
    } 
    else 
    {
        printf ("El año seleccionado no es bisiestro");
    }
    return (0);
}