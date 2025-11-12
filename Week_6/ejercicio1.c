#include <stdio.h>

int main () 
{

    int one, two, *uno, *dos;
    double mean, *media;

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
    printf ("*uno = uno = %d\n", *uno);
    printf ("*dos = dos = %d\n", *dos);
    printf ("*media = mean = %g\n", *media);

    return 0;
}