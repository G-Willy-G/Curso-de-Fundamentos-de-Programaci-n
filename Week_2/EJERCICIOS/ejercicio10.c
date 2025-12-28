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

    // Prompt user for input
    printf ("Introduce el primer numero entero: ");
    scanf ("%ld", &a);
    printf ("Introduce el segundo numero entero: ");
    scanf ("%ld", &b);
    printf ("Introduce el tercer numero entero: ");
    scanf ("%ld", &c);

    // Determine the greatest number
    // We use >= to correctly handle cases where numbers are equal
    if (a > b && a > c)
    {
        printf ("%ld es mayor a %ld y a %ld\n", a, b, c);
    } 
    else if (b > a && b > c)
    {
        printf ("%ld es mayor a %ld y a %ld\n", b, a, c);
    } 
    else if (b == a && b > c)
    {
        printf ("%ld es igual a %ld y es mayor a %ld\n", b, a, c);
    }
    else if (c == a && c > b)
    {
        printf ("%ld es igual a %ld y es mayor a %ld\n", c, a, b);
    }
    else if (c == b && c > a)
    {
        printf ("%ld es igual a %ld y es mayor a %ld\n", c, b, a);
    }
    else if (c == a && c == b)
    {
        printf ("Todos son iguales, no hay uno mayor a otro\n");
    }
    else 
    {
        printf ("%ld es mayor a %ld y a %ld\n", c, b, a);
    }

    return (0);
}