#include <stdio.h>

int main (void)
{
    long    edad;
    double    altura;
    char    inicial;

    printf ("Introduce la altura: ");
    scanf ("%lf", &altura);

    printf ("Introduce el edad: ");
    scanf ("%ld", &edad);
    
    printf ("Introduce la inicial: ");
    scanf (" %c", &inicial);

    printf ("El peso ideal de %c, el cual mide %.1lf cm y tiene %ld anos, es %.3lf", inicial, altura, edad, (altura - 100 + (9 * (double) edad) / 100));
    return (0);
}