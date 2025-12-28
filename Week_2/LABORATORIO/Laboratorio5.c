#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define constants to avoid "magic numbers" in the code.
// This makes the code easier to maintain and understand.
#define MAX_LONGITUD_NOMBRE 50  // Maximum number of characters for a person's name
#define PERSONAS 2              // Total number of people to process

// Structure 'Persona' to hold information for a single individual.
typedef struct {
    char    nombre[MAX_LONGITUD_NOMBRE]; // Character array to store the name
    long    edad;                        // Long integer to store the age
} Persona;

// Structure 'Personas' to group multiple people and store statistical data (average).
typedef struct {
    Persona persona[PERSONAS]; // Array of 'Persona' structures (size defined by PERSONAS)
    double  media_edades;      // Double precision variable to store the average age
} Personas;

int main(void) 
{
    // Declare a variable 'personas' of type 'Personas' structure
    Personas personas;

    // --- Input for the First Person ---
    printf("Introduce el nombre de la primera persona: ");
    // Read the name from standard input and store it in the first element (index 0)
    scanf("%s", personas.persona[0].nombre);
    
    printf("Introduce la edad de la primera persona: ");
    // Read the age from standard input. Note the '&' operator to get the address of the variable.
    scanf("%ld", &personas.persona[0].edad);
    
    // --- Input for the Second Person ---
    printf("Introduce el nombre de la segunda persona: ");
    // Read the name and store it in the second element (index 1)
    scanf("%s", personas.persona[1].nombre);
    
    printf("Introduce la edad de la segunda persona: ");
    // Read the age for the second person
    scanf("%ld", &personas.persona[1].edad);
    
    // --- Output the Data ---
    // Print the name and age for both people to verify the input
    printf("%s tiene %ld años y %s tiene %ld años\n", 
            personas.persona[0].nombre, personas.persona[0].edad, 
            personas.persona[1].nombre, personas.persona[1].edad);

    // --- Calculate Average Age ---
    // Calculate the sum of ages and divide by PERSONAS.
    // Casting PERSONAS to (double) is crucial here to ensure floating-point division.
    // Without the cast, integer division would occur, truncating the decimal part.
    personas.media_edades = (personas.persona[0].edad + personas.persona[1].edad) / (double)PERSONAS;
    
    // Print the calculated average age, formatted to 2 decimal places
    printf("La media de las edades es: %.f\n", personas.media_edades);

    return (0); // Return 0 to indicate the program finished successfully
}
