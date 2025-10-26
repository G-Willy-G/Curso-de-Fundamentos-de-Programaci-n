#include <stdio.h>
#include <stdlib.h>

#define TAM 99

int main ()

{
    int numero = rand()%TAM, intento=0;

        while (numero!=intento)
        {
            printf ("Introduce un numero para adivinar el de tu compañero: ");
            scanf ("\n%d", &intento);

            if (numero<intento){
                printf ("El numero introducido es mayor\n");
            } else {
                printf ("El numero introducido es menor\n");
            }
        }

        printf("Enhorabuena, lo has adivinado\n");
    
    return 0;
}