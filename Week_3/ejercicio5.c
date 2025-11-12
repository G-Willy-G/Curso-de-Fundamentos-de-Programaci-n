#include <stdio.h>

int main () 

{
    int i=0, numero, x[10]={2,3,4,5,6,7,8,9,10,52};

    do {
        printf ("CUANTOS NUMEROS QUIERES QUE SEAN MOSTRADOS: ");
        scanf ("%d", &numero);
    }
    while (numero<1 || numero>10);

    while (i<numero) {

        printf ("%d ", x[i]);
        i++;
    }

    return 0;
}