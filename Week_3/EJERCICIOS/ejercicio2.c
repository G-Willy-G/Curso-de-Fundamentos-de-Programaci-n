#include <stdio.h>
#include <stdlib.h>

#define TAM 99 // Constant for maximum random number range

int main(void)
{
    long    numero;  // Variable to store the target number
    long    intento; // Variable to store the user's guess

    intento = 0; // Initialize attempt counter/variable
    
    // Generate a random number. Note: Without srand(), this sequence repeats.
    // Logic: rand() % 99 returns 0-98. Adding 1 makes it 1-99.
    numero = rand()%TAM+1;

        // Loop until the user guess (intento) equals the target (numero)
        while (numero != intento)
        {
            // If target is less than guess, tell user the guess is too high
            if (numero < intento)
            {
                printf ("El numero introducido es mayor\n");
            } 
            else
            {
                // Otherwise, the guess is too low
                printf ("El numero introducido es menor\n");
            }
            
            // Prompt for a new guess
            printf ("Introduce un numero para adivinar: ");
            scanf ("%ld", &intento);
        }

        // Correct guess
        printf("Enhorabuena, lo has adivinado\n");
    
    return (0);
}