#include <stdio.h>
int main ()

{
    int peso, altura, bmi;

    printf ("Introduzca su peso en kilogramos: ");
    scanf ("%d", &peso);

    printf ("Introduzca su altura en centimetro: ");
    scanf ("%d", &altura);

    bmi = 10000 * peso / (altura*altura);

    if (bmi>=21 && bmi<=25){
        printf ("Usted tiene un peso normal");
    } else if (bmi < 21){
        printf ("Usted tiene menos peso del que le corresponderia");
    } else {
        printf ("Usted tiene mas peso del que le corresponderia");
    }

    return 0;

}