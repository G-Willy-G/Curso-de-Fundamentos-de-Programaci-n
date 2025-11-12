#include <stdio.h>
#define TAM 100

int main ()

{
    char texto [TAM]="Hello World";
    texto [5] = '0';
    printf ("%s", texto);
    return 0;
}