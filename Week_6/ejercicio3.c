#include <stdio.h>
#include <math.h>

void statistics(int x, int y, double *pMean, double *pVar) {

    *pMean = (x+y)/2.0;
    *pVar = pow(x-(*pMean), 2) + pow(y-(*pMean), 2);

}

int main () {

    int num1, num2;
    double media, varianza;

    printf ("Introduce el primer numero: ");
    scanf ("%d", &num1);

    printf ("Introduce el segundo numero: ");
    scanf ("%d", &num2);

    statistics (num1,num2,&media,&varianza);

    printf ("La media de ambos numeros es %g y la varianza es %g", media, varianza);

    return 0;
}