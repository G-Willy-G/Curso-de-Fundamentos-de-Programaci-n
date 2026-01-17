#include <stdio.h>
#include <stdlib.h>

#define NUM_MAX_NOTAS 1000

int main(void)
{
    FILE *fichero = NULL;

    double  grades[NUM_MAX_NOTAS];
    double  mean = 0;
    size_t  i = 0;

    if (!(fichero = fopen ("list.txt", "r")))
    {
        fprintf (stderr, "Error al abrir el archivo\n");
        return (1);
    }

    for (i = 0; fscanf (fichero, "%*s %lf %*s", &grades[i]) == 1; i++)
    {
        mean += grades[i];
    }

    fclose (fichero);

    if (!(fichero = fopen ("list.txt", "a")))
    {
        fprintf (stderr, "Error al abrir el archivo\n");
        return (1);
    }
    fprintf (fichero, "La media de la clase es: %.3lf\n", mean / i);
    fclose (fichero);
    return (0);
}