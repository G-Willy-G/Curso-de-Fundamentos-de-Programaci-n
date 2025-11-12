#include <stdio.h>

double area (){

    double radio, area;

    printf ("Introduce el radio del circulo: ");
    scanf ("%lf", &radio);

    area = 3.14159*radio*radio;

    printf ("El area del circulo es : %lf", area);

}

int main () {

    printf ("El area del circulo es : %lf", area());

    return 0;
}