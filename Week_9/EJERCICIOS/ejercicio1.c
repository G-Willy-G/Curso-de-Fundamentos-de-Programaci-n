#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double *array;
    double  media;
    size_t  i;
    size_t  numeros; // Variable para guardar la cantidad de números

    media = 0;
    array = NULL;

    printf("Cuantos numeros quieres introducir?: ");
    // 1. Leemos el número y lo guardamos en la variable 'n'
    if (scanf("%zu", &numeros) != 1) {
        fprintf(stderr, "Error al leer la entrada.\n");
        return 1;
    }

    // Validación extra: Si pide 0 números, terminamos para evitar dividir por 0 luego.
    if (numeros == 0) {
        printf("No hay numeros para calcular la media.\n");
        return 0;
    }

    // 2. Reservamos la memoria usando el valor de 'numeros'
    // calloc toma dos argumentos: (número de elementos, tamaño de cada uno)
    array = (double *) calloc (numeros, sizeof (double));

    // 3. SIEMPRE verificamos si la memoria se reservó correctamente
    if (array == NULL) {
        fprintf(stderr, "Error: No se pudo reservar memoria.\n");
        return 1;
    }

    for (i = 0; i < numeros; i++)
    {
        printf("Introduce el numero %zu: ", i + 1);
        if (scanf("%lf", &array[i]) != 1)
        {
            fprintf (stderr, "Error al leer la entrada\n");
            free(array);
            return (1);
        }
        media += array[i];
    }

    media /= numeros;
    printf ("La media de terminos es %.2lf\n", media);

    free (array);
    array = NULL;
    return (0);
}