#include <stdio.h>
int main ()
{
    int year;

    printf ("Introduce el año que quieres comprobar si es bisiestro: ");
    scanf ("%d", &year);

    if (year%4==0 || year%400==0) {
        printf ("El año seleccionado es bisiestro");
    } else {
        printf ("El año seleccionado no es bisiestro");
    }

    return 0;
}