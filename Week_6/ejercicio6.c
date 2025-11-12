#include <stdio.h>
#include <math.h>

#define SIZE 100

int main () {

    char texto[SIZE], *p;
    int longitud=0;
    int mitad1, mitad2;

    printf ("Enter a string of characters: ");
    scanf ("%s", texto);

    for (p=texto; *p; p++) {
        longitud++;
    }

    mitad1 = round(longitud/2);
    mitad2 = longitud/2;

    printf ("The \"%s\" string has a length of %d characters and half is position %d\n", texto, longitud, mitad2);
    printf ("The second half of the \"%s\" string is \"", texto);
    
    for (p=texto+mitad2; *p; p++) {
        printf ("%c", *p);
    }

    printf ("\"");


    return 0;
}