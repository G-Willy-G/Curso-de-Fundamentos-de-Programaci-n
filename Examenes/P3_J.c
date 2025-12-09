#include <stdio.h>
#include <stdlib.h>

#define MAX_NOMBRE 100
#define MIN_ESTUDIANTES 2
#define MAX_ESTUDIANTES 1000
#define MIN_PRUEBAS 2
#define MAX_PRUEBAS 20
#define MIN_NOTA 0 
#define MAX_NOTA 10  

typedef struct {
    char nombre[MAX_NOMBRE];
    int numPruebas; /* Número de pruebas realizadas por el estudiante */
    float *notas;   /* Array de notas que se reservará dinámicamente según cuántas 
                       pruebas haya hecho el estudiante, y almacenará todas las notas */ 
    float notaFinal;/* Nota final, calculada como la media de las notas de las pruebas */
} Estudiante;

short leerEstudiante(Estudiante *pe);
Estudiante *leerEstudiantes(long *num);

void liberarEst(Estudiante *pe);
void liberarEsts(Estudiante *pests, long num);

long posMejorNota(Estudiante *pests, long num);

/* 
Para las funciones que reciben tablas, tambien sirve lo siguiente, es equivalente 
(y no hay que cambiar nada en el cuerpo de las funciones): 
long posMejorNota(Estudiante estudiantes[], long num);
*/

int main() {
    Estudiante *pests=NULL;
    long num, posMejor;
    
    /* lee los datos de los estudiantes*/
    if ( (pests=leerEstudiantes(&num)) == NULL){     
        printf("Error al leer los datos de los estudiantes\n"); 
        return 1;
    }
    /* busca la posicion que ocupa el estudiante con mejor nota en el array*/
    if ((posMejor=posMejorNota(pests,num))<0) {        /* El retorno -1 indica error */
        printf("Error al buscar el estudiante con la mejor nota\n");
        liberarEsts (pests, num);
        return 1;
    }
    /* imprime los datos del estudiante con mejor nota */
    printf("\nEl/la estudiante con mejor nota es %s, con %d pruebas realizadas y una media de %.2f\n", pests[posMejor].nombre, pests[posMejor].numPruebas, pests[posMejor].notaFinal);
    liberarEsts (pests, num);
    return 0;
}   

/* Función que pide nombre y nº de pruebas realizadas por un estudiante, reserva memoria dinámica para las notas, pide las notas, calcula la media, y guarda todo en la estructura de Estudiante */
short leerEstudiante(Estudiante *pe) {
    int i;

    /* Comprueba argumento de entrada*/
    if (!pe)  /* equivalente:  if (pe==NULL) */
        return 1;
    
    /* pide los datos */
    printf("Nombre: ");
    scanf("%s",pe->nombre);
 
    do {
        printf("Numero de pruebas realizadas (%d-%d): ", MIN_PRUEBAS, MAX_PRUEBAS);
        scanf("%d", &pe->numPruebas);
    } while (pe->numPruebas < MIN_PRUEBAS || pe->numPruebas > MAX_PRUEBAS);
    
    /* reserva el espacio justo para guardar las notas */
    pe->notas = (float *) calloc (pe->numPruebas, sizeof(float));
    if (pe->notas == NULL){
        return 1;
    }
    /* lee las notas de las pruebas (comprobando que están dentro del rango) y va calculando la nota final (media)
       también se puede hacer todo con una variable de tipo float (de nombre media, p.ej) en vez de usar pe->notaFinal 
       y antes de salir de la función asignar: pe->notaFinal=media */
    pe->notaFinal = 0.0;
    for (i=0; i<pe->numPruebas; i++) {
        do {
            printf("Nota de la prueba %d (%d-%d): ", i+1, MIN_NOTA, MAX_NOTA);
            scanf("%f", &pe->notas[i]);
        } while (pe->notas[i] < MIN_NOTA || pe->notas[i] > MAX_NOTA);
        pe->notaFinal += pe->notas[i];
    }
    pe->notaFinal /= pe->numPruebas;

    return 0;
}


/* Función que lee y calcula los datos de todos los estudiantes y devuelve un array de memoria reservada dinámicamente con todos los datos */
Estudiante *leerEstudiantes(long *num) {
    long i;
    Estudiante *pests=NULL;

    /* control de argumentos de entrada*/
    if (!num)
        return NULL;
    
    /* pide el valor del número de estudiantes */
    do {
        printf("Numero de estudiantes en clase: ");
        scanf("%ld",num);
    } while (*num<MIN_ESTUDIANTES || *num>MAX_ESTUDIANTES);

    
    /* reserva memoria para el array de estudiantes */
    pests =  (Estudiante *) calloc (*num, sizeof(Estudiante));
    if (!pests){
        return NULL;
    }

    /* lee los datos de cada estudiante */
    for (i=0; i<*num; i++) {
        printf("\nEstudiante %ld\n", i+1);
        if (leerEstudiante(&pests[i])) {   /*Equivale a  leerDatosEstudiante(pe+i)  */
            /* Si el estudiante i-ésimo no se ha podido leer (ni se ha reservado), liberar los anteriores y liberar el array antes de salir*/
            /* le pasamos i a la función porque dentro de ella el bucle va de 0 a i-1 (mientras es < i)*/
            liberarEsts(pests,i);
            return NULL;
        }
    }
    /* Alternativa para todo lo anterior: declarar variable long n; usar n en vez de *num y al final asignar: *num=n; */

    /* Devuelve el puntero a la memoria reservada*/
    return pests;
}

/* Busca las posiciones que ocupan los estudiantes con la mejor y peor nota */
long posMejorNota(Estudiante *pests, long num){
    long posMejor, i;

    /* Variables para la versión alternativa de la solución (ver más abajo)
    long posicMejor;
    float notaMejor;
    */

    /* comprobacion de argumentos de entrada */
    if (!pests)
        return -1;

    /* búsqueda del estudiante con mejor nota y con peor nota (para empezar, será el primero)*/   
    posMejor = 0;
    for (i=1; i<num; i++) {
        if (pests[i].notaFinal > pests[posMejor].notaFinal) {
            posMejor=i;
        }
    }
    
    /* Solución alternativa, usando variable float notaMejor: */
    /* Al principio, el primero será el mejor */
    /*
    posMejor = 0;
    notaMejor =  pests[0].notaFinal;
    for (i=1; i<num; i++) {
        if (pests[i].notaFinal > notaMejor) {
            posMejor=i;
            notaMejor=pests[i].notaFinal;
        }
    }
   */
    return posMejor;
}


/* Libera la memoria que se haya reservado de forma dinámica para los campos de la estructura Estudiante
(en este programa, el array de notas) */
void liberarEst (Estudiante *pe){
    if (pe){   /* if (pe!=NULL) */
        if (pe->notas){     /* if (pe->notas!=NULL) */
            free(pe->notas);
            pe->notas = NULL; /* opcional */
        }
    }
}

/* Libera la memoria reservada dinámicamente para el array de estudiantes.
Pero, antes, llama a la función liberarEst para cada estudiante, 
para que se libere aquello que se haya reservado dinámicamente 
dentro de cada estructura de estudiante */
void liberarEsts (Estudiante *pests, long num){
    long i;
    if (pests){
        for (i=0; i<num; i++){
            liberarEst(&pests[i]);
        }
        free(pests);
    }       
}