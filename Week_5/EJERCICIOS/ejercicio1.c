#include <stdio.h>

void area()
{
    double  radio;
    double  area;

    printf ("Introduce el radio del circulo: ");
    scanf ("%lf", &radio);

    area = 3.14159*radio*radio;

    printf ("El area del circulo es : %.3lf\n", area);
}

int main (void) 
{
    area();

    return 0;
}