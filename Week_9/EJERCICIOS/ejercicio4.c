#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long    **matriz;
    size_t  filas;
    size_t  i;
    size_t  j;
    size_t  k;
    size_t  columnas;

    printf("Introduce el numero de filas: ");
    if (scanf("%zu", &filas) != 1)
    {
        fprintf (stderr, "Error al leer la entrada");
        return (1);
    }

    printf("Introduce el numero de columnas: ");
    if (scanf("%zu", &columnas) != 1)
    {
        fprintf (stderr, "Error al leer la entrada");
        return (1);
    }

    matriz = (long **) calloc (filas, sizeof(long *));
    if (matriz == NULL)
    {
        fprintf (stderr, "Error al leer la entrada");
        return (1);
    }
    for (i = 0; i < filas; i++)
    {
        matriz[i] = (long *) calloc (columnas, sizeof(long));
        if (matriz[i] == NULL)
        {
            fprintf (stderr, "Error: No se pudo reservar memoria");
            while (i > 0)
            {
                i--;
                free(matriz[i]);
            }
            free (matriz);
            matriz = NULL;
            return (1);
        }
    }
    for (i = 0; i < filas; i++)
    {
        for(j = 0; j < columnas; j++)
        {
            printf("Introduce la posición [%zu][%zu]: ", i + 1, j + 1);
            if (scanf("%ld", &matriz[i][j]) != 1)
            {
                fprintf (stderr, "Error: No se pudo reservar memoria");
                for (k = 0; k < filas; k++)
                {
                    free(matriz[k]);
                    matriz[k] = NULL;
                }
                free(matriz);
                matriz = NULL;
                return (1);
            }
        }
    }

    // --- IMPRIMIR LA MATRIZ ---
    printf("\n--- La Matriz Introducida es: ---\n\n");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            // Usamos %4ld para que ocupe 4 espacios y quede alineado
            printf("%4ld ", matriz[i][j]); 
        }
        printf("\n\n"); // Salto de línea al terminar cada fila
    }

    for (i = 0; i < filas; i++)
    {
        free(matriz[i]);
        matriz[i] = NULL;
    }
    free(matriz);
    matriz = NULL;
    return (0);
}
