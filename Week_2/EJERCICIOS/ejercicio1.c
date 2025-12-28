#include <stdio.h>

int main(void)
{
    long    edad;
    short   condicion;

    edad = 0;
    condicion = 0;

    printf ("Introduce tu Edad: ");
    scanf ("%ld", &edad);

    condicion = ((edad >= 18) && (edad%3)!=0);
    printf ("La variable es : %hd\n", condicion);
    return (0);
}