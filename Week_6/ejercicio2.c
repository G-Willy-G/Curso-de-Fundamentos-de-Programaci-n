#include <stdio.h>

void neitherOddNorEven(int uno, int *dos) {

if ((uno%2 && (*dos)%2) || (!(uno%2) && !((*dos)%2)) )
    (*dos)++;

}



int main ()

{
    int numero1, numero2;

    printf ("Introduce el primer numero: ");
    scanf ("%d", &numero1);

    printf ("Introduce el segundo numero: ");
    scanf ("%d", &numero2);

    neitherOddNorEven(numero1,&numero2);

    printf ("Despues de la llamada nos quedan %d y %d", numero1, numero2);


    return 0;
}