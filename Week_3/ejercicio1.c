#include <stdio.h>

#define TAM 99

int main ()

{
    int numero, intento=0;

    printf ("Introduce el numero que se debe adivinar: ");
    scanf ("%d", &numero);

    if (numero <= TAM){
        while (numero!=intento)
        {
            printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf ("Introduce un numero para adivinar el de tu compañero: ");
            scanf ("%d", &intento);
        }

        printf("Enhorabuena, lo has adivinado");
    } else {
        printf ("El numero introducido es mayor a 99");
    }
    
    


    return 0;
}