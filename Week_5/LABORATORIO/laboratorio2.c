#include <stdio.h>

#define MAX 10

short son_distintos (long numeros[], long i, long numero)
{
    while (i > 0)
    {
        if (numero == numeros[i - 1])
        {
            return (0);
        }
        i--;
    }
    return (1);
}

long cuentas_veces (long numeros[], long numero, long longitud)
{
    long    i;
    long    veces;

    veces = 0;
    for (i = 0 ; i < longitud; i++)
    {
        if (numeros[i] == numero)
        {
            veces++;
        }
    }
    return (veces);
}
int main(void)
{
    long    longitud; 
    long    numeros[MAX];
    long    distintos[MAX];
    long    i;
    long    j;

    do{ 
        printf ("Introduce la longitud de la lista [5,10]: ");
        scanf ("%ld", &longitud);
        if (longitud < 5 || longitud > 10)
        {
            printf ("La longitud %ld esta fuera del rango [5,10].\n", longitud);
        }
    } while (longitud < 5 || longitud > 10);

    j = 0;
    for (i = 0; i < longitud; i++)
    {
        printf("Introduce el termino numero %li: ", i + 1);
        scanf ("%ld", &numeros[i]);
        if (son_distintos(numeros, i, numeros[i]))
        {
            distintos[j] = numeros[i];
            j++;
        }
    }

    for (i = 0; i < j; i++)
    {
        printf ("El numero %ld aparece: %ld\n", distintos[i], cuentas_veces(numeros, distintos[i], longitud));
    }
}
