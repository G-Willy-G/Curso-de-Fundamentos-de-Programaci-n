#include <stdio.h>
#include <stdlib.h>

#define TAM 99

int main ()

{
    int numero = rand()%TAM+1, intento=0;

        while (numero!=intento)
        {
            if (numero<intento){
                printf ("El numero introducido es mayor\n");
            } else {
                printf ("El numero introducido es menor\n");
            }
            
            printf ("Introduce un numero para adivinar: ");
            scanf ("\n%d", &intento);
        }

        printf("Enhorabuena, lo has adivinado\n");
    
    return 0;
}