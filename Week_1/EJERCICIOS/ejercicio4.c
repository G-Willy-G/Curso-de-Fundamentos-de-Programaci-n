#include <stdio.h>

int main(void)
{
    //Declaration of variables
    int peso;
    int bmi;
    int altura;

    //initialize variables
    peso = 0;
    altura = 0; 
    bmi = 0;

    //Input from user
    printf ("Introduce tu peso en kilogramos: ");
    scanf ("%d", &peso);

    printf ("Introduce la altura en centimetros: ");
    scanf ("%d", &altura);

    bmi = 10000 * peso / (altura*altura);

    printf ("Tu BMI es: %.2d", bmi);

    return (0);
}