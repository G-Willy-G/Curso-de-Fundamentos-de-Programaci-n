#include <stdio.h>
#include <math.h>

#define TAM 3

int main ()

{
    double cumple1[TAM], cumple2[TAM];

    printf ("Introduce la fecha de nacimiento del primer usuario separado por comas: ");
    scanf ("%lf%lf%lf", &cumple1[0], &cumple1[1], &cumple1[2]);

    printf ("Introduce la fecha de nacimiento del segundo usuario separado por comas: ");
    scanf ("%lf%lf%lf", &cumple2[0], &cumple2[1], &cumple2[2]);

    if (cumple1[0]==cumple2[0] && cumple1[1]==cumple2[1] && cumple1[2]==cumple2[2]) {
        printf ("Felicidades! Nacisteis el mismo dia.");
    } else if (cumple1[0]==cumple2[0] && cumple1[1]==cumple2[1] && cumple1[2]!=cumple2[2]) {
        printf ("Cumplis años el mismo dia pero con %.lf años de diferencia.", fabs(cumple1[2]-cumple2[2]));
    } else {
        printf ("Teneis cumpleaños diferentes");
    }

    return 0;
}