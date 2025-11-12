#include <stdio.h>

double area (double radio){

    double area = 3.14159 * radio * radio;
return area;
}

int main () {

    double radio=0;

    printf ("Introduce el radio del Cirdulo: ");
    scanf ("%lf", &radio);
    printf ("El area del circulo es de %lf cm2", area(radio));
    return 0;
}