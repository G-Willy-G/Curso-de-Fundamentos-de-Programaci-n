#include <stdio.h>

#define SIZE 3
#define INCREMENTO 5
void    incremento (long array[SIZE])
{
    long    i;
    for (i = 0; i < SIZE; i++)
    {
        array[i] = array[i] + INCREMENTO;
    }
}
int main(void)
{
    long    array[SIZE] = {1,2,3};
    long    i;


    printf("Los elementos del array son: \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("Termino %ld: %ld\n", i + 1, array[i]);
    }

    incremento (array);

    printf("Los nuevos elementos del array son: \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("Termino %ld: %ld\n", i + 1, array[i]);
    }
}