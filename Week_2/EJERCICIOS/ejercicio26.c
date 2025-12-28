#include <stdio.h>

#define DIM 50  // Constant for general string dimensions
#define TEL 12  // Constant for phone number string length
#define ZIP 6   // Constant for zipcode string length

// Struct to represent a date
typedef struct {
    int     day;
    int     month;
    int     year;
} Fecha;

// Struct to represent an address
typedef struct {
    char    city[DIM];
    int     number;
    char    street[DIM];
    char    zipcode[DIM];
} Dirreccion;

// Struct to represent a person, using nested structs
typedef struct {
    char    name[DIM];
    char    surname[DIM];
    char    phone[TEL];
    Dirreccion dirreccion;  // Nested struct for address
    Fecha   dob;            // Nested struct for date of birth
} Persona;

int main(void)
{
    Persona persona;    // Variable of type 'Persona'

    // Prompt user for personal details
    printf("Introduce el nombre: ");
    scanf("%s", persona.name);

    printf("Introduce el apellido: ");
    scanf("%s", persona.surname);

    printf("Introduce el telefono: ");
    scanf("%s", persona.phone);

    // Prompt user for address details (accessing nested struct members)
    printf("Introduce la ciudad: ");
    scanf("%s", persona.dirreccion.city);

    printf("Introduce el numero: ");
    scanf("%d", &persona.dirreccion.number);

    printf("Introduce la calle: ");
    scanf("%s", persona.dirreccion.street);

    printf("Introduce el codigo postal: ");
    scanf("%s", persona.dirreccion.zipcode);

    // Prompt user for date of birth (accessing nested struct members)
    printf("Introduce el dia: ");
    scanf("%d", &persona.dob.day);

    printf("Introduce el mes: ");
    scanf("%d", &persona.dob.month);

    printf("Introduce el año: ");
    scanf("%d", &persona.dob.year);

    // Output all the information
    printf("El nombre es:\t%s\n", persona.name);
    printf("El apellido es:\t%s\n", persona.surname);
    printf("El telefono es:\t%s\n", persona.phone);
    printf("La ciudad es:\t%s\n", persona.dirreccion.city);
    printf("El numero es:\t%d\n", persona.dirreccion.number);
    printf("La calle es:\t%s\n", persona.dirreccion.street);
    printf("El C.P. es:\t%s\n", persona.dirreccion.zipcode);
    printf("El dia es:\t%d\n", persona.dob.day);
    printf("El mes es:\t%d\n", persona.dob.month);
    printf("El año es:\t%d\n", persona.dob.year);

    return (0);
}