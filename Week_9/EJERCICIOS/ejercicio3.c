#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Fecha;

int main(void)
{
    Fecha   *puntero;
    size_t  id_menor;
    size_t  cantidad;
    size_t  i;

    puntero = NULL;
    cantidad = 0;

    printf ("Introduce la cantidad de fechas que quieres: ");
    if (scanf("%zu", &cantidad) != 1)
    {
        fprintf(stderr, "Error al leer la entrada\n");
        return (1);
    }

    puntero = (Fecha *) calloc (cantidad, sizeof(Fecha));
    if (puntero == NULL)
    {
        fprintf (stderr, "Error: No se pudo reservar memoria\n ");
        return (1);
    }

    for (i = 0; i < cantidad; i++)
    {
        printf ("Introduce la fecha %zu\n", i + 1);
        printf ("\tDia: ");
        if (scanf("%d", &puntero[i].dia) != 1)
        {
            fprintf(stderr, "Error al leer la entrada\n");
            return (1);
        }
        printf ("\tMes: ");
        if (scanf("%d", &puntero[i].mes) != 1)
        {
            fprintf(stderr, "Error al leer la entrada\n");
            return (1);
        }
        printf ("\tAño: ");
        if (scanf("%d", &puntero[i].ano) != 1)
        {
            fprintf(stderr, "Error al leer la entrada\n");
            return (1);
        }
    }

// --- LÓGICA PARA ENCONTRAR LA FECHA MENOR ---

    // 1. Asumimos que la primera es la menor inicialmente
    // Guardamos el ÍNDICE de la menor, es más eficiente que copiar toda la estructura
    id_menor = 0;
    // 2. Empezamos el bucle desde 1 (porque ya tenemos la 0)
    for (i = 1; i < cantidad; i++)
    {
        // Caso A: El año actual es MENOR que el año de la menor registrada
        if (puntero[i].ano < puntero[id_menor].ano)
        {
            id_menor = i;
        }
        // Caso B: El año es IGUAL, pero el mes es MENOR
        else if (puntero[i].ano == puntero[id_menor].ano && 
                puntero[i].mes < puntero[id_menor].mes)
        {
            id_menor = i;
        }
        // Caso C: Año y mes IGUALES, pero el día es MENOR
        else if (puntero[i].ano == puntero[id_menor].ano && 
                puntero[i].mes == puntero[id_menor].mes &&
                puntero[i].dia < puntero[id_menor].dia)
        {
            id_menor = i;
        }
    }

    printf("\nLa fecha mas antigua es: %02d/%02d/%d\n", 
            puntero[id_menor].dia, 
            puntero[id_menor].mes, 
            puntero[id_menor].ano);
    free (puntero);
    puntero = NULL;

    return (0);
}