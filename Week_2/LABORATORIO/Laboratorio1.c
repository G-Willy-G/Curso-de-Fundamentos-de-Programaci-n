#include <stdio.h>
#include <stdlib.h> // for abs

#define TAM 3

int main(void)
{
    int cumple1[TAM], cumple2[TAM];
    int r;

    printf("Introduce la fecha de nacimiento del primer usuario (dd,mm,yyyy): ");
    r = scanf("%d,%d,%d", &cumple1[0], &cumple1[1], &cumple1[2]);
    if (r != 3) {
        fprintf(stderr, "Entrada no válida para el primer usuario. Usa el formato dd,mm,yyyy\n");
        return 1;
    }

    printf("Introduce la fecha de nacimiento del segundo usuario (dd,mm,yyyy): ");
    r = scanf("%d,%d,%d", &cumple2[0], &cumple2[1], &cumple2[2]);
    if (r != 3) {
        fprintf(stderr, "Entrada no válida para el segundo usuario. Usa el formato dd,mm,yyyy\n");
        return 1;
    }

    /* Validación básica de rangos para día y mes */
    if (cumple1[0] < 1 || cumple1[0] > 31 || cumple1[1] < 1 || cumple1[1] > 12 ||
        cumple2[0] < 1 || cumple2[0] > 31 || cumple2[1] < 1 || cumple2[1] > 12) {
        fprintf(stderr, "Día o mes fuera de rango (dd:1-31, mm:1-12)\n");
        return 1;
    }

    if (cumple1[0] == cumple2[0] && cumple1[1] == cumple2[1] && cumple1[2] == cumple2[2]) {
        printf("¡Felicidades! Nacisteis el mismo día.\n");
    } else if (cumple1[0] == cumple2[0] && cumple1[1] == cumple2[1]) {
        printf("Cumplís años el mismo día pero con %d años de diferencia.\n", abs(cumple1[2] - cumple2[2]));
    } else {
        printf("Tenéis cumpleaños diferentes.\n");
    }

    return 0;
}