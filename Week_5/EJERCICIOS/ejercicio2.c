#include <stdio.h>

double area()
{
    double  radio;
    double  area;

    printf ("Introduce el radio del circulo: ");
    scanf ("%lf", &radio);

    area = 3.14159*radio*radio;

    return (area);
}

int main (void) 
{
    double  area_circulo;
    
    area_circulo = area();

    printf ("El area del circulo es : %.3lf\n", area_circulo);

    return 0;
}