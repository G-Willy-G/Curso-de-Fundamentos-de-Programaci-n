#include <stdio.h>

#define SIZE 1000

typedef struct
{
    long    n;
    long    x[SIZE];
} lista;

void minMax(lista u, long *min, long *max)
{
    long    i;

    for (i = 0, *min = u.x[0], *max = u.x[0]; i < u.n; i++)
    {
        if (u.x[i] < *min)
        {
            *min = u.x[i];
        }
        if (u.x[i] > *max)
        {
            *max = u.x[i];
        }
    }
}

int main(void)
{
    long    minimo;
    long    maximo;
    long    i;
    lista   array;

    printf("Introduce la cantidad de numeros: ");
    scanf("%ld", &array.n);

    for (i = 0; i < array.n; i++)
    {
        printf("\tIntroduce el numero %li: ", i + 1);
        scanf("%ld", &array.x[i]);
    }

    minMax(array, &minimo, &maximo);
    printf("El minimo es: %ld\n", minimo);
    printf("El maximo es: %ld\n", maximo);
    return (0);
}
