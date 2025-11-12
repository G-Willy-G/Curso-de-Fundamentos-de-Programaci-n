#include <stdio.h>
#include <stdlib.h>

#define TAM 99

int main () 

{

    int numero = rand()%TAM+1, adivinar=-1;

    do
    {
        printf ("INNTRODUCE UN NUMERO PARA ADIVINAR: ");
        scanf ("%d", &adivinar);
        
        if (adivinar<numero && adivinar != -1){
            printf("El numero introducido es menor\n");
        } else if (adivinar>numero && adivinar != -1){
            printf("El numero introducido es mayor\n");
        }
    } while (numero!=adivinar);

    printf ("ENHORABUENA, HAS ADIVINADO EL NUMERO");
    
    return 0;
}