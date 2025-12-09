#include <stdio.h>
#include <stdlib.h>

#define MAX_NOMBRE 100
#define MIN_ESTUDIANTES 2
#define MAX_ESTUDIANTES 1000
#define MIN_PRUEBAS 2
#define MAX_PRUEBAS 20
#define MIN_NOTA 0 
#define MAX_NOTA 10  
#define UMBRAL_INF 4.75
#define UMBRAL_SUP 9.75
#define APROBADO 5
#define SOBRESALIENTE 10

typedef struct {
    char nombre[MAX_NOMBRE];   /* Nombre de un estudiante */
    float notas [MAX_PRUEBAS]; /* Tabla de notas donde se guarda 1 nota por cada prueba realizada */
    int numPruebas;  /* Número de pruebas realizadas */
    float notaFinal;
} Estudiante;

short leerDatosEstudiante(Estudiante *pe);
short leerDatosEstudiantes(Estudiante **estudiantes, long *num);
short MejorNota(Estudiante pests [ ], long num);

int main(void) {







}

short leerDatosEstudiantes(Estudiante **estudiantes, long *num) {

    int i;
    short estado = 0;

    if (num == NULL) return 1;

    do {
        printf("Numero de estudiantes en clase: ");
        scanf("%li", num);
    } while (*num > MAX_ESTUDIANTES || *num < MIN_ESTUDIANTES);

    *estudiantes = (Estudiante *) calloc(*num, sizeof(Estudiante));
    
    for ( i = 0; i < num; i++) {
        printf ("Estudiante %i\n", i + 1);
        estado = estado || leerDatosEstudiante(&(*estudiantes)[i]);
    }

    return estado;
}

short leerDatosEstudiante (Estudiante *pe){

    int i;
    float sumaNotas;
    short estado = 0;

    if (pe == NULL) return 1;

    pe->nombre = (char *) calloc(MAX_NOMBRE, sizeof(char));
    printf("Nombre: ");
    scanf("%s", pe->nombre);

    do {
        printf("Numero de pruebas realizadas (%i-%i): ", MIN_PRUEBAS, MAX_PRUEBAS);
        scanf("%i", &pe->numPruebas);
    } while ( pe->numPruebas<MIN_PRUEBAS || pe->numPruebas>MAX_PRUEBAS);

    pe->notas = (float *) calloc(pe->numPruebas, sizeof(float));

    for (i=0, sumaNotas; i<pe->numPruebas; I++){
        do {
            printf("Nota de kla prueba %i (%i-%i): ", i + 1, MIN_NOTA, MAX_NOTA);+
            scanf ("%f", &pe->notas[i]);
        } while (pe->notas<MIN_NOTA || pe->notas>MAX_NOTA);

        sumaNotas += pe->notas[i];
    }

    pe->notaFinal = sumaNotas / pe->numPruebas;
    
    return estado;
}

short MejorNota(Estudiante estudiante)