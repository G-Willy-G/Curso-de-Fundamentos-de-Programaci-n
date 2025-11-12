#include <stdio.h>

int main () 

{
    int i=0, numero, x[10]={2,3,4,5,6,7,8,9,10,52};

    printf ("CUANTOS NUMEROS QUIERES QUE SEAN MOSTRADOS: ");
    scanf ("%d", &numero);

    while (i<numero) {

        printf ("%d ", x[i]);
        i++;
    }

    return 0;
}