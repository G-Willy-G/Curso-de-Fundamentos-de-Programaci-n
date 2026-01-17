#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    long  i;
    long  numero;
    long  j;

    printf("Introduce un número: ");
    scanf("%ld", &numero);

    i = 2;
    while (i <= numero) {

        j = 2;
        while (j<=i/2 && i%j)
        {
            j++;
        }

        if (j>i/2)
        {
            printf("%ld ", i);
        }

        i++;
    }
    return (0);
}
