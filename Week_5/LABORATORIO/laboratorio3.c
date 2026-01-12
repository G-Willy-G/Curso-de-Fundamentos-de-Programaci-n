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
    long    rsa;
    long    i;
    long    j;
    long    completado;

    rsa = 0;
    i = 0;
    j = 0;
    completado = 0;

    printf("Introduce la clave publica RSA: ");
    scanf("%ld", &rsa);

    for (i = 2; i < rsa; i++)
    {
        j = rsa / i;

        if (primo(j) && primo(i) && rsa % j == 0 && rsa % i == 0)
        {
            completado++;
            break;
        }
    }

    if (completado)
    {
        printf("La llave publica RSA %ld es obtenia a través de dos numeros primos: %ld y %ld (%ld = %ld x %ld)\n", rsa, i, j, rsa, i, j);
    }
    else 
    {
        printf("%ld no es el producto de dos numeros primos\n", rsa);
    }
    return (0);
}