#include <stdio.h>
#define DIM 50
#define TEL 12
#define ZIP 6
#define NUM 2

typedef struct {
    int day;
    int month;
    int year;
} Fecha;

typedef struct {
    char city[DIM];
    int number;
    char street[DIM];
    char zipcode[DIM];
} Dirreccion;

typedef struct {
    char name [DIM];
    char surname [DIM];
    char phone [TEL];
    Dirreccion dirreccion;
    Fecha dob;
} Contacto;

int main () {

    Contacto c[NUM];

    printf ("Introduce la información para la primera persona\n");
    printf ("Introduce el nombre: ");
    scanf ("%s", c[0].name);
    printf ("Introduce el apellido: ");
    scanf ("%s", c[0].surname);
    printf ("Introduce el Numero de Telefono: ");
    scanf ("%s", c[0].phone);
    printf ("Introduce la calle: ");
    scanf ("%s", c[0].dirreccion.street);
    printf ("Introduce el numero de la calle: ");
    scanf ("%s", c[0].dirreccion.number);
    printf ("Introduce el codigo postal: ");
    scanf ("%s", c[0].dirreccion.zipcode);
    printf ("Introduce la ciudad: ");
    scanf ("%s", c[0].dirreccion.city);
    printf ("Introduce el dia de dob ");
    scanf ("%s", c[0].dob.day);
    printf ("Introduce el mes de dob ");
    scanf ("%s", c[0].dob.month);
    printf ("Introduce el año de dob ");
    scanf ("%s", c[0].dob.year);

    printf ("Introduce la información para la segunda persona\n");
    printf ("Introduce el nombre: ");
    scanf ("%s", c[1].name);
    printf ("Introduce el apellido: ");
    scanf ("%s", c[1].surname);
    printf ("Introduce el Numero de Telefono: ");
    scanf ("%s", c[1].phone);
    printf ("Introduce la calle: ");
    scanf ("%s", c[1].dirreccion.street);
    printf ("Introduce el numero de la calle: ");
    scanf ("%s", c[1].dirreccion.number);
    printf ("Introduce el codigo postal: ");
    scanf ("%s", c[1].dirreccion.zipcode);
    printf ("Introduce la ciudad: ");
    scanf ("%s", c[1].dirreccion.city);
    printf ("Introduce el dia de nacimiento ");
    scanf ("%s", c[1].dob.day);
    printf ("Introduce el mes de nacimiento ");
    scanf ("%s", c[1].dob.month);
    printf ("Introduce el año de nacimiento ");
    scanf ("%s", c[1].dob.year);

    printf ("Primera persona: \n");
    printf ("Nombre: %s\n", c[0].name);
    printf ("Apellido: %s\n", c[0].surname);
    printf ("Telefono: %s\n", c[0].phone);
    printf ("Caller: %s\n", c[0].dirreccion.street);
    printf ("Numero de la Calle: %s\n", c[0].dirreccion.number);
    printf ("ZIP: %s\n", c[0].dirreccion.zipcode);
    printf ("Ciudad: %s\n", c[0].dirreccion.city);
    printf ("Fecha de Nacimiento: %02d/%02d/%02d\n", c[0].dob.day, c[0].dob.month, c[0].dob.year);

    printf ("Segunda persona: \n");
    printf ("Nombre: %s\n", c[1].name);
    printf ("Apellido: %s\n", c[1].surname);
    printf ("Telefono: %s\n", c[1].phone);
    printf ("Caller: %s\n", c[1].dirreccion.street);
    printf ("Numero de la Calle: %s\n", c[1].dirreccion.number);
    printf ("ZIP: %s\n", c[1].dirreccion.zipcode);
    printf ("Ciudad: %s\n", c[1].dirreccion.city);
    printf ("Fecha de Nacimiento: %02d/%02d/%02d\n", c[1].dob.day, c[1].dob.month, c[1].dob.year);


    return 0;
}