#include <stdio.h>

int primo (int numero) {
    long    i;

    if (numero < 2) return (0);

    for (i = 2; i <= numero/2; i++)
    {  
        if (numero % i == 0) return (0);
    }
    return (1); 
}

int main(void)
{
    long    numero;
    long    i;

    printf ("Introduce un numero: ");
    scanf ("%ld", &numero);

    for (i = 2; i <= numero; i++)
    {
        if (primo(i))
        {
            printf ("%li ", i);
        }
    }

    return (0);

}