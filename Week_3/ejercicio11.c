#include <stdio.h>

int main () {

    int multiplicacion = 0, i=0;

    printf ("Seleccione un nunero del 1 al 9 del que quiera ver la tabla de multiplicar: ");
    scanf ("%d", &multiplicacion);

    for (i=0;i<=9;i++) {
        printf (" %d x %d = %d\n", multiplicacion, i, multiplicacion*i);
    }

    return 0;
}