#include <stdio.h>
#define DIM 50
#define TEL 12
#define ZIP 6

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