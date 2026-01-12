#include <stdio.h>

int main(void) 
{

    int     one;
    int     two;
    int     *uno;
    int     *dos;
    double  mean;
    double  *media;

    uno = &one;
    dos = &two;
    media = &mean;

    printf ("Intoduce el primer numero: ");
    scanf ("%d", uno);

    printf ("Introduce el segundo numero: ");
    scanf ("%d", dos);

    *media = (*uno + *dos)/2;

    printf ("uno = &one = %p\n", uno);
    printf ("dos = &two = %p\n", dos);
    printf ("*uno = one = %d\n", *uno);
    printf ("*dos = two = %d\n", *dos);
    printf ("*media = mean = %g\n", *media);

    return (0);
}