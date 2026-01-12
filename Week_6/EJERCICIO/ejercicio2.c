#include <stdio.h>

void neitherOddNorEven(int uno, int *dos)
{
    if ((uno%2 && (*dos)%2) || (!(uno%2) && !((*dos)%2)) )
    {   
        (*dos)++;
    }   

}

int main (void)
{
    int numero1;
    int numero2;

    numero1 = 0; 
    numero2 = 0;

    printf ("Introduce el primer numero: ");
    scanf ("%d", &numero1);

    printf ("Introduce el segundo numero: ");
    scanf ("%d", &numero2);

    neitherOddNorEven(numero1, &numero2);

    printf ("Despues de la llamada nos quedan %d y %d\n", numero1, numero2);

    return (0);
}