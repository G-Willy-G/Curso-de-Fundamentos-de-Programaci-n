#include <stdio.h>
#define TAM 3

int main ()

{
    int fechas[TAM][TAM];

    printf ("Enter a day: ");
    scanf ("%d", &fechas[0][0]);
    printf ("Enter a month: ");
    scanf ("%d", &fechas[0][1]);
    printf ("Enter a year: ");
    scanf ("%d", &fechas[0][2]);

    printf ("Enter another day: ");
    scanf ("%d", &fechas[1][0]);
    printf ("Enter another month: ");
    scanf ("%d", &fechas[1][1]);
    printf ("Enter another year: ");
    scanf ("%d", &fechas[1][2]);

    fechas[2][0] = fechas[0][0]-fechas[1][0];
    fechas[2][1] = fechas[0][1]-fechas[1][1];
    fechas[2][2] = fechas[0][2]-fechas[1][2];
    

    printf ("The difference in days is: %d\n", fechas[0][0]-fechas[1][0]);
    printf ("The difference in moths is: %d\n", fechas[0][1]-fechas[1][1]);
    printf ("The difference in years is: %d\n", fechas[0][2]-fechas[1][2]);

    return 0;
}