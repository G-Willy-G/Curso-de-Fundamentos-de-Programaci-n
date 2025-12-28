#include <stdio.h>
#include <stdlib.h>

#define MAX 99 // Constant to define the maximum range for the random number

int main(void) 
{
    long numero;   // Variable to hold the random number generated
    long adivinar; // Variable to hold the number entered by the user

    adivinar = 0; // Initialize adivinar to 0
    
    // Generate a random number between 0 and 98, then add 1 to make it 1-99.
    // Note: rand() generates a pseudo-random number.
    numero = rand()%MAX+1;
    
    // Start a do-while loop to repeat the guessing process
    do
    {   
        printf ("INNTRODUCE UN NUMERO PARA ADIVINAR: ");
        scanf ("%ld", &adivinar); // Read the user's guess
        
        // Check if the user's guess is less than the target number
        if (adivinar < numero)
        {
            printf("El numero introducido es menor\n");
        } 
        // Check if the user's guess is greater than the target number
        else if (adivinar > numero)
        {
            printf("El numero introducido es mayor\n");
        }
    // Continue loop while the user's guess is not equal to the target number
    } while (numero != adivinar);

    // If the loop ends, it means prediction was correct
    printf ("ENHORABUENA, HAS ADIVINADO EL NUMERO");
    
    return (0);
}
