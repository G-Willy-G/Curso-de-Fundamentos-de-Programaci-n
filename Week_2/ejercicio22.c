#include <stdio.h>
#define STRING_LONG 5
#define ARRAY_LONG 4

int main ()

{
    char texto1 [STRING_LONG], texto2 [STRING_LONG];
    int diferencia[ARRAY_LONG];

    printf ("Introduce el primer string: ");
    scanf ("%s", texto1);
    printf ("Introduce el segundo string: ");
    scanf ("%s", texto2);

    diferencia[0]= texto1[0] - texto2[0];
    diferencia[1]= texto1[1] - texto2[1];
    diferencia[2]= texto1[2] - texto2[2];
    diferencia[3]= texto1[3] - texto2[3];

    printf ("La diferencia entre cada caracter de ambos strings son: %d, %d, %d y %d", diferencia[0], diferencia[1], diferencia[2], diferencia[3]);

    return 0;
}
