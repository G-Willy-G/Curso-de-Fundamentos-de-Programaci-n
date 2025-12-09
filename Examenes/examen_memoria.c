/*******************************************************/
/*  Trabajo realizado por Guillermo Gascón García      */
/*  Examen de Memoria Dinámica                         */
/*  Fecha: 13 de Noviembre de 2025                     */
/*                                                     */
/*******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_NOMBRE 100
#define MIN_ESTUDIANTES 2
#define MAX_ESTUDIANTES 1000
#define MIN_PRUEBAS 2
#define MAX_PRUEBAS 20
#define MIN_NOTA 0 
#define MAX_NOTA 10

/*NUEVA ESTRUCTURA DE DATOS REQUERIDA*/

typedef struct
{
    char nombre[MAX_NOMBRE];  /* Nombre de un estudiante */
    int numPruebas; /* Número de pruebas realizadas por el estudiante */
    float *notas;   /* Array de notas que se reservará dinámicamente según cuántas pruebas haya hecho el estudiante, y almacenará todas las notas */
} Estudiante;

/*INICIALIZACIÓN DE LAS FUNCIONES*/

short leerDatosEstudiante(Estudiante *pe);
Estudiante * leerEstudiantes(long *num);
void liberarEsts (Estudiante *pe, long num);
short imprimirDatosEstudiante(Estudiante *pe);
short imprimirDatosEstudiantes(Estudiante *pests, long num);

/*FLUJO DEL MAIN*/

int main (void) {

    
    long num;
    short estado = 0;

    /*Declara una variable del tipo necesario para crear después un array dinámico de estudiantes*/

    Estudiante *estudiante;

    /*LLama a la función leerEstudiantes para crear la memoria necesaria para albergar
    los datos de los estudiantes, leerlos de teclado y almacenarlos en esa memoria.*/

    estudiante = leerEstudiantes(&num);
    
    /*Imprime los datos de los estudiantes llamando a la función imprimirEstudiantes. */
    
    estado = imprimirDatosEstudiantes (estudiante, num);

    /*Comprueba por si hay algun error en alguna funcion*/
    if(estado == 1) return 1;

    /*Libera toda la memoria reservada, llamando a liberarEsts.*/
    liberarEsts(estudiante, num);

    return 0;
}

/*FUNCION QUE INICIALIZA LA LECTURA DE LOS DATOS*/

Estudiante * leerEstudiantes(long *num){

    Estudiante *estudiantes;
    int i;
    short estado = 0;
    long numero_a_pasar=*num;
    
    /*Comprobación si puntero es NULL, devuelva 1*/

    if (num == NULL) return NULL;

    /*Pide al usuario el número de estudiantes que habrá en la tabla (repitiendo la petición
    si el número no está dentro del rango previsto) y almacena ese número en la dirección de memoria a la que apunta num*/

    do {
        printf("Numero de estudiantes en clase: ");
        scanf("%ld", num);
    } while (*num<MIN_ESTUDIANTES || *num>MAX_ESTUDIANTES);

    /*Reserva memoria dinámica para una tabla de estudiantes del tamaño que ha indicado el usuario*/

    estudiantes = (Estudiante *) calloc(*num, sizeof(Estudiante));

    /*va leyendo los datos de cada estudiante realizando llamadas sucesivas a la función leerEstudiante para cada uno de ellos,
    de modo que, tras esas llamadas, los datos de todos queden almacenados en la tabla. */
    
    for(i = 0; i<*num; i++){
        printf ("\nEstudiante %i\n", i + 1);
        estado = leerDatosEstudiante (&estudiantes[i]);

        if (estado == 1) liberarEsts (estudiantes, numero_a_pasar);
    }

    return estudiantes;
}

short leerDatosEstudiante(Estudiante *pe){
    
    int i;

    /*Lee del teclado los siguientes datos de un estudiante: nombre y  nº de pruebas realizadas*/
    
    printf("Nombre: ");
    scanf("%s", pe->nombre);

    /*UN DO WHILE PARA QUE : El nº de pruebas realizadas esté en el rango permitido (si no, vuelve a pedir el dato).*/
    
    do {
        printf("Numero de pruebas realizadas (%i-%i): ", MIN_PRUEBAS, MAX_PRUEBAS);
        scanf("%d", &pe->numPruebas);
    } while (pe->numPruebas<MIN_PRUEBAS || pe->numPruebas>MAX_PRUEBAS);

    /*Reserva memoria dinámica para un array de notas de tantos elementos como nº de pruebas realizadas.*/

    pe->notas = (float *) calloc(pe->numPruebas, sizeof(float));

    if (pe->notas== NULL) return 1;

    for (i = 0; i < pe->numPruebas; i++){
        
        /*UN DO WHILE PARA QUE : Cada nota esté en el rango permitido (si no, vuelve a pedirla).*/

        do {
            printf ("Nota de la prueba %i (%i-%i): ", i + 1, MIN_NOTA, MAX_NOTA);
            scanf ("%f", &pe->notas[i]);
        } while (pe->notas[i] < MIN_NOTA || pe->notas[i] > MAX_NOTA);
    }

    return 0;
}


/*FUNCION QUE INICIALIZARA LA IMPRESION DE LOS DATOS DE LOS ESTUDIANTES*/

short imprimirDatosEstudiantes(Estudiante *pests, long num){

    int i;

    /*Comprueba que el puntero de entrada no sea NULL, devolviendo 1 si lo es*/
    if (pests == NULL) return 1;

    printf("\nIMPRIMIENDO DATOS DE ESTUDIANTES...\n");
    printf("Numero de estudiantes en clase: %ld", num);

    for (i = 0; i < num; i++){
        printf ("\nEstudiante %i\n", i + 1);
        imprimirDatosEstudiante (&pests[i]);
    }

    return 0;
}

short imprimirDatosEstudiante(Estudiante *pe){
    
    int i;
    
    printf("        Nombre: %s. Num pruebas realizadas: %d.\n", pe->nombre, pe->numPruebas);
    for (i = 0; i < pe->numPruebas; i++){
        printf("                Nota prueba %i: %.2lf\n", i + 1, pe->notas[i]);
    }
    
    return 0;
}

/*FUNCION LIBERA EL ESPACIO*/

void liberarEsts (Estudiante *pe, long num){
    free(pe->notas);
    free(pe);
    num = 0;
}