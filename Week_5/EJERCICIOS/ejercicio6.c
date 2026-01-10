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

    printf ("Introduce el numero a analizar: ");
    scanf ("%ld", &numero);

    if (!primo(numero)){
        printf ("El numero %ld no es primo\n", numero);
    }
    else if (primo(numero + 2))
    {
        printf ("El numero %ld tiene pareja prima y es %ld\n", numero, numero + 2);
    }
    else if (primo(numero - 2))
    {
        printf ("El numero %ld tiene pareja prima y es %ld\n", numero, numero - 2);
    }
    else 
    {
        printf ("El numero %ld es primo pero no tiene pareja prima\n", numero);
    }

    return (0);
}