#include <stdio.h>

// Define constants to prevent magic numbers and improve readability
#define MAX_NAME_LENGTH 50      // Maximum allowed length for the patient's name
#define NUM_APPOINTMENTS 2      // Number of appointments to track per patient

// Structure 'Fecha' to represent a date (day, month, year)
typedef struct {
    int     dia;    // Day of the month
    int     mes;    // Month of the year
    int     ano;    // Year
} Fecha;

// Structure 'Citas' to store patient information including their appointments
typedef struct {
    char    nombre[MAX_NAME_LENGTH];        // Array to store the patient's name
    Fecha   fecha_cita[NUM_APPOINTMENTS];   // Array of 'Fecha' structures to store appointment dates
} Citas;

int main(void)
{
    // Declare a variable 'citas' of type 'Citas' to hold the data
    Citas   citas;

    // --- Input Patient Name ---
    printf("Introduzca el nombre del paciente: ");
    // Read the patient's name string from standard input
    scanf("%s", citas.nombre);

    // --- Input First Appointment Date ---
    // The first appointment is stored at index 0 of the fecha_cita array
    printf("Introduzca la fecha de la primera cita: \n");
    printf("\tDia: ");
    scanf("%d", &citas.fecha_cita[0].dia); // Read day
    printf("\tMes: ");
    scanf("%d", &citas.fecha_cita[0].mes); // Read month
    printf("\tAno: ");
    scanf("%d", &citas.fecha_cita[0].ano); // Read year

    // --- Input Second Appointment Date ---
    // The second appointment is stored at index 1 of the fecha_cita array
    printf("Introduzca la fecha de la segunda cita: \n");
    printf("\tDia: ");
    scanf("%d", &citas.fecha_cita[1].dia); // Read day
    printf("\tMes: ");
    scanf("%d", &citas.fecha_cita[1].mes); // Read month
    printf("\tAno: ");
    scanf("%d", &citas.fecha_cita[1].ano); // Read year
    
    // --- Output the Data ---
    // Display the stored information to the user
    printf("\nNombre: %s\n", citas.nombre);
    
    // Print the first appointment date formatted as DD/MM/YYYY
    printf("Fecha de la primera cita: %d/%d/%d\n", 
            citas.fecha_cita[0].dia, 
            citas.fecha_cita[0].mes, 
            citas.fecha_cita[0].ano);

    // Print the second appointment date formatted as DD/MM/YYYY
    printf("Fecha de la segunda cita: %d/%d/%d\n", 
            citas.fecha_cita[1].dia, 
            citas.fecha_cita[1].mes, 
            citas.fecha_cita[1].ano);
    
    return (0); // Return success status
}
