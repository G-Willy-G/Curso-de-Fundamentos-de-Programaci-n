#include <stdio.h>
int main ()
{
    char letra;

    printf ("Introduce la letra que deseas transformar: ");
    scanf ("%c", &letra);

    if (letra <=90 && letra >=65){
        printf ("La letra transformada es: %c", letra + 32);
    } else if (letra <=122 && letra>=97){
        printf ("La letra transformada es: %c", letra - 32);
    } else {
        printf ("No se ha introducido una letra valida");
    }

    return 0;
}