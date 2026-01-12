#include <stdio.h>

#define DIM 20

int main(void)
{
    long    longitud;
    char    texto[DIM];
    char    *p;

    longitud = 0;

    printf ("Introduce la cadena de texto: ");
    scanf ("%s", texto);

    for (p = texto; *p != '\0'; p++)
    {
        longitud++;
    }

    printf ("La cadena de texto (%s) tiene una longitud de %ld\n", texto, longitud);

    return (0);
}