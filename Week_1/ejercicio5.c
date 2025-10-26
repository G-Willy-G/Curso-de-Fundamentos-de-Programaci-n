#include <stdio.h>
int main ()
{
    double nota,p1,p2,p3,p4,p5;
    printf("Introduce la nota del parcial 1: ");
    scanf ("%lf", &p1);
    printf("Introduce la nota del parcial 2: ");
    scanf ("%lf", &p2);
    printf("Introduce la nota del parcial 3: ");
    scanf ("%lf", &p3);
    printf("Introduce la nota del parcial 4: ");
    scanf ("%lf", &p4);
    printf("Introduce la nota del parcial 5: ");
    scanf ("%lf", &p5);

    nota = (p1+2*p2+2*p3+2*p4+3*p5)/10;
    printf("Su nota media es de %.2lf", nota);

    return 0;
}