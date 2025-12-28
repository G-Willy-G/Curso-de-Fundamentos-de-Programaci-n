#include <stdio.h>

int main(void)
{
    double  peso;
    double  altura;
    double  bmi;

    peso = 0;
    altura = 0;
    bmi = 0;

    printf ("Introduzca su peso en kilogramos: ");
    scanf ("%lf", &peso);

    printf ("Introduzca su altura en centimetro: ");
    scanf ("%lf", &altura);

    bmi = 10000 * peso / (altura*altura);

    if (bmi >= 21 && bmi <= 25){
        printf ("Usted tiene un peso normal");
    } else if (bmi < 21){
        printf ("Usted tiene menos peso del que le corresponderia");
    } else {
        printf ("Usted tiene mas peso del que le corresponderia");
    }
    return (0);
}