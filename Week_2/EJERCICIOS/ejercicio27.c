#include <stdio.h>

#define DIM 50  // Dimensions for strings
#define TEL 12  // Dimension for phone number
#define ZIP 6   // Dimension for zip code
#define NUM 2   // Number of contacts to store

// Struct for Date
typedef struct {
    int day;
    int month;
    int year;
} Fecha;

// Struct for Address
typedef struct {
    char city[DIM];
    int number;
    char street[DIM];
    char zipcode[DIM];
} Dirreccion;

// Struct for Contact information, nested structs for Address and Date
typedef struct {
    char name [DIM];
    char surname [DIM];
    char phone [TEL];
    Dirreccion dirreccion;  // Nested Address struct
    Fecha dob;              // Nested Date struct
} Contacto;

int main(void) {

    // Array of Contacto structs to store multiple people
    Contacto persona[NUM];

    // --- Input for First Person ---
    printf ("Introduce la información para la primera persona\n");
    printf ("Introduce el nombre: ");
    scanf ("%s", persona[0].name);
    printf ("Introduce el apellido: ");
    scanf ("%s", persona[0].surname);
    printf ("Introduce el Numero de Telefono: ");
    scanf ("%s", persona[0].phone);
    
    // Accessing nested struct array elements
    printf ("Introduce la calle: ");
    scanf ("%s", persona[0].dirreccion.street);
    printf ("Introduce el numero de la calle: ");
    scanf ("%d", &persona[0].dirreccion.number);
    printf ("Introduce el codigo postal: ");
    scanf ("%s", persona[0].dirreccion.zipcode);
    printf ("Introduce la ciudad: ");
    scanf ("%s", persona[0].dirreccion.city);
    
    printf ("Introduce el dia de nacimiento: ");
    scanf ("%d", &persona[0].dob.day);
    printf ("Introduce el mes de nacimiento: ");
    scanf ("%d", &persona[0].dob.month);
    printf ("Introduce el año de nacimiento: ");
    scanf ("%d", &persona[0].dob.year);

    // --- Input for Second Person ---
    printf ("Introduce la información para la segunda persona\n");
    printf ("Introduce el nombre: ");
    scanf ("%s", persona[1].name);
    printf ("Introduce el apellido: ");
    scanf ("%s", persona[1].surname);
    printf ("Introduce el Numero de Telefono: ");
    scanf ("%s", persona[1].phone);
    
    printf ("Introduce la calle: ");
    scanf ("%s", persona[1].dirreccion.street);
    printf ("Introduce el numero de la calle: ");
    scanf ("%d", &persona[1].dirreccion.number);
    printf ("Introduce el codigo postal: ");
    scanf ("%s", persona[1].dirreccion.zipcode);
    printf ("Introduce la ciudad: ");
    scanf ("%s", persona[1].dirreccion.city);
    
    printf ("Introduce el dia de nacimiento: ");
    scanf ("%d", &persona[1].dob.day);
    printf ("Introduce el mes de nacimiento: ");
    scanf ("%d", &persona[1].dob.month);
    printf ("Introduce el año de nacimiento: ");
    scanf ("%d", &persona[1].dob.year);

    // --- Output Information ---
    
    printf ("\nPrimera persona: \n");
    printf ("Nombre: %s\n", persona[0].name);
    printf ("Apellido: %s\n", persona[0].surname);
    printf ("Telefono: %s\n", persona[0].phone);
    printf ("Caller: %s\n", persona[0].dirreccion.street);
    printf ("Numero de la Calle: %d\n", persona[0].dirreccion.number);
    printf ("CP: %s\n", persona[0].dirreccion.zipcode);
    printf ("Ciudad: %s\n", persona[0].dirreccion.city);
    printf ("Fecha de Nacimiento: %02d/%02d/%02d\n", persona[0].dob.day, persona[0].dob.month, persona[0].dob.year);

    printf ("\nSegunda persona: \n");
    printf ("Nombre: %s\n", persona[1].name);
    printf ("Apellido: %s\n", persona[1].surname);
    printf ("Telefono: %s\n", persona[1].phone);
    printf ("Caller: %s\n", persona[1].dirreccion.street);
    printf ("Numero de la Calle: %d\n", persona[1].dirreccion.number);
    printf ("CP: %s\n", persona[1].dirreccion.zipcode);
    printf ("Ciudad: %s\n", persona[1].dirreccion.city);
    printf ("Fecha de Nacimiento: %02d/%02d/%02d\n", persona[1].dob.day, persona[1].dob.month, persona[1].dob.year);

    return (0);
}