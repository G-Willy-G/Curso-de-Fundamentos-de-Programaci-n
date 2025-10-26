#include <stdio.h>
int main ()
{
    int peso, bmi, altura;
    printf ("Introduce tu peso en kilogramos: ");
    scanf ("%d", &peso);
    printf ("Introduce la altura en centimetros: ");
    scanf ("%d", &altura);
    bmi = 10000 * peso / (altura*altura);
    printf ("Tu BMI es: %.2d", bmi);
    return 0;

}