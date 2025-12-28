#include <stdio.h>

int main(void)
{
    char caracteres[2];

    printf("Introduce un primer caracter: ");
    scanf("%s", &caracteres[0]);

    printf("Introduce el primer caracter: ");
    scanf("%s", &caracteres[1]);

    printf("Si anadimos el codigo ASCII del caracter %s que es %d con el codigo ASCII del caracter %s que es %d, obtenemos la suma de %d", caracteres[0], caracteres[0], caracteres[1], caracteres[1], caracteres[0] + caracteres[1]);
    return 0;
}