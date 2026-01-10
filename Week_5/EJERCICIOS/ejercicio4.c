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

    printf ("Introduce un numero: ");
    scanf ("%ld", &numero);

    if (primo(numero))
    {
        printf("El numero es primo\n");
    }
    else
    {
        printf("El numero no es primo\n");
    }
    return(0);
}