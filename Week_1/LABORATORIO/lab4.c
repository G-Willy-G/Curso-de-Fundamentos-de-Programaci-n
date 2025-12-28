#include <stdio.h>

int main(void)
{
    short   num;
    char    letra;

    num = 0;
    letra = '\0';

    printf("Introduce un número entre 1 y 5: ");
    scanf("%hd", &num);

    if (num < 1 || num > 5)
    {
        fprintf(stderr, "Error: El número debe estar entre 1 y 5.\n");
        return (1);
    }

    printf("Introduce un caracter: ");
    scanf(" %c", &letra);

    printf("El caracter \'%c\' con codigo ASCII %d, si es encriptado con el numero %hd, se comvertira en el caracter \'%c\' con codigo ASCII %d", letra, letra, num, (letra + num), (letra + num));
    return (0);
}