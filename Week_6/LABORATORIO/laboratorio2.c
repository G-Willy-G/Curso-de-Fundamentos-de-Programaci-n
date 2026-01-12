#include <stdio.h>

#define SIZE 100

int main(void)
{
    long    cantidad;
    long    i;
    long    j;
    long    array[SIZE];
    long    temp_suma;

    cantidad = 5;

    do 
    {
        if (cantidad < 1 || cantidad > 100)
        {
            printf ("Error, el numero %ld no esta entre 1 y 100\n", cantidad);
        }
        printf ("Introduce cuantos numeros quieres leer: ");
        scanf ("%ld", &cantidad);
    } while (cantidad < 1 || cantidad > 100);

    for (i = 0; i < cantidad; i++)
    {
        printf ("Introduce el numero %ld de %ld: ", i + 1, cantidad);
        scanf ("%ld", &array[i]);
    }

    for (i = 0; i < cantidad; i++)
    {
        for (j = 0, temp_suma = 0; j < i; j++)
        {
            temp_suma += array[j];
        }
        printf ("La suma de los valores previos a %ld es: %ld\n", array[i], temp_suma);
    }
    return (0);
}