#include <stdio.h>

// Define a constant for the maximum allowable number value.
// This avoids magic numbers and makes it easy to change the limit later.
#define MAX_VALUE 99 

int main(void)
{
    // 'target_number': the number to be guessed.
    // 'guess': the current guess entered by the second user. Initialized to 0.
    int target_number; 
    int guess = 0;

    // --- Player 1: Set the Target Number ---
    printf("Introduce el numero que se debe adivinar: ");
    scanf("%d", &target_number);

    // Check if the input number is within the allowed range (<= MAX_VALUE)
    if (target_number <= MAX_VALUE) {
        
         // Loop until the guessed number matches the target number.
        while (target_number != guess)
        {
            // Print multiple newlines to "clear" the console screen.
            // This prevents the second player from seeing the input number easily.
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            
            // --- Player 2: Make a Guess ---
            printf("Introduce un numero para adivinar el de tu compañero: ");
            scanf("%d", &guess);
        }

        // If the loop exits, it means the numbers matched.
        printf("Enhorabuena, lo has adivinado\n");
        
    } else {
        // Evaluate the condition if the number provided is out of valid range.
        // Use the defined constant in the message to ensure consistency.
        printf("El numero introducido es mayor a %d\n", MAX_VALUE);
    }
    
    return (0); // Return 0 to indicate successful execution.
}