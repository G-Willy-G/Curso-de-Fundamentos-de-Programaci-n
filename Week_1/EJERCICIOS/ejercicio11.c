#include <stdio.h>

int main(void)
{
    char letter;
    int integer;

    printf("Dime un caracter: ");
    //We introduce a space before %c to consume any leftover whitespace characters
    scanf(" %c", &letter);
    printf("Dime un numero entero: ");
    scanf("%d", &integer);

    printf ("El codigo ASCII del caracter \'%c\' es %d y el que corresponde sumandole el numero introducido es %c\n", letter, (int)letter, (int)letter + integer);

    return (0);
}