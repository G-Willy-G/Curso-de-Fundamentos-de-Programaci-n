#include <stdio.h>

#define DIM 10

int main () 
{
    int array[DIM], numero, i=0;

    do {
        printf ("How many numbers do you want to read? (between 2 and 10): ");
        scanf ("%d", &numero);
    } while (numero < 2 || numero > 10);

    while (i<numero) {
        printf ("Enter the number %d of %d: ", i+1, numero);
        scanf ("%d", &array[i]);
        i++;
    }

    i=numero-2;

    while (i >= 0 ) {
        if (array[i] < array[numero-1]){
            printf ("The number %d is less than the number %d\n", i, array[numero-1]);
        }
        i--;
    }



    return 0;
}