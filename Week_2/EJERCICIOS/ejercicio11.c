#include <stdio.h>

int main(void)
{
    long    a;  // First number
    long    b;  // Second number
    long    c;  // Third number

    // Initialize variables
    a = 0;
    b = 0;
    c = 0;

    // Prompt user for three integers
    printf ("Introduce el primer numero entero: ");
    scanf ("%ld", &a);
    printf ("Introduce el segundo numero entero: ");
    scanf ("%ld", &b);
    printf ("Introduce el tercer numero entero: ");
    scanf ("%ld", &c);

    // Determines the smallest number and handles ties
    if (a < b && a < c)
    {
        // a is strictly smaller than b and c
        printf ("%ld es menor que %ld y %ld", a, b, c);
    } 
    else if (b < a && b < c)
    {
        // b is strictly smaller than a and c
        printf ("%ld es menor que %ld y %ld", b, a, c);
    }
    else if (c < a && c < b)
    {
        // c is strictly smaller than a and b
        printf ("%ld es menor que %ld y %ld", c, b, a);
    }
    else if (a == b && a < c)
    {
        // a and b are equal and smaller than c
        printf ("%ld es igual que %ld y es menor que %ld", a, b, c);
    }
    else if (a == c && a < b)
    {
        // a and c are equal and smaller than b
        printf ("%ld es igual que %ld y es menor que %ld", a, c, b);
    }
    else if (b == c && b < a)
    {
        // b and c are equal and smaller than a
        printf ("%ld es igual que %ld y es menor que %ld", b, c, a);
    }
    else
    {
        // All three numbers are equal
        printf ("Todos los numeros son iguales");
    }

    return (0);
}