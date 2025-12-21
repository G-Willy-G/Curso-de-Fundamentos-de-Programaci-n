#include <stdio.h>

int main(void)
{
    char letter_1;
    char letter_2;

    printf("Dime un caracter: ");
    //We introduce a space before %c to consume any leftover whitespace characters
    scanf(" %c", &letter_1);
    printf("Dime un segundo caracter: ");
    scanf("%c", &letter_2);
    printf ("La distancia entre \'%c\' y \'%c\' es %d\n", letter_1, letter_2, (int)letter_2 - (int)letter_1);
    return (0);
}