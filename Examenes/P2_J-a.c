#include <stdio.h>

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
    char nombre[MAX_NOMBRE];
    float notas [MAX_PRUEBAS];
    int numPruebas;
    float notaFinal;
} Estudiante;

short leerDatosEstudiantes(Estudiante estudiantes[], long *num);
short leerDatosEstudiante(Estudiante *pe);
short imprimirDatosEstudiantes(Estudiante estudiantes[], long num);
short imprimirDatosEstudiante(Estudiante *pe);

int main(){
    Estudiante ests[MAX_ESTUDIANTES];
    long num;
    
    /* lee los datos de los estudiantes*/
    if (leerDatosEstudiantes(ests, &num)){     /*if (leerDatosEstudiantes(ests, &num) ==1){  //El retorno 1 indica error */
        printf("Error al leer los datos de los estudiantes\n"); 
        return 1;
    }
    /* imprime los datos de los estudiantes*/
    if (imprimirDatosEstudiantes(ests, num)){     /*if (imprimirDatosEstudiantes(ests, num) ==1){  //El retorno 1 indica error */
        printf("Error al imprimir los datos de los estudiantes\n"); 
        return 1;
    }
    return 0;
}   

/* Función que lee y calcula los datos de todos los estudiantes */
short leerDatosEstudiantes(Estudiante *estudiantes, long *num) {
    long i;

    /* control de argumentos de entrada*/
    if (!estudiantes || !num)  /* equivalente:  if (estudiantes==NULL || num==NULL) */
        return 1;
    
    /* pide el valor del número de estudiantes */
    do {
        printf("Numero de estudiantes en clase: ");
        scanf("%ld",num);
    } while (*num<MIN_ESTUDIANTES || *num>MAX_ESTUDIANTES);

    /* lee los datos de cada estudiante */
    for (i=0; i<*num; i++) {
        printf("\nEstudiante %ld\n", i+1);
        if (leerDatosEstudiante(&estudiantes[i])) {
            printf("Error al leer los datos del estudiante %ld\n",i);
            return 1;
        }
    }
    /* Alternativa: declarar variable long n; usar n y al final *num=n; */
    return 0;
}

/* Función que pide las notas de un estudiante y calcula la media */
short leerDatosEstudiante(Estudiante *pe) {
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
    
short imprimirDatosEstudiante(Estudiante *pe){
    int i;

    /* Comprueba argumento de entrada*/
    if (!pe)  /* equivalente:  if (pe==NULL) */
        return 1;
    
    printf("\tNombre: %s. Num pruebas realizadas: %d.\n", pe->nombre, pe->numPruebas);
    for (i=0; i< pe->numPruebas; i++) {
        printf("\t\tNota prueba %d: %.2f\n", i+1, pe->notas[i]);
    }
    printf("\t\tNota media: %.2f\n", pe->notaFinal);
    return 0;
}


short imprimirDatosEstudiantes(Estudiante estudiantes[], long num){
    long i;

    /* control de argumentos de entrada*/
    if (!estudiantes)  /* equivalente:  if (estudiantes==NULL) */
        return 1;
    
    /* imprime el valor del número de estudiantes */
    printf("\nIMPRIMIENDO DATOS DE ESTUDIANTES... \nNumero de estudiantes en clase: %ld\n", num);

    /* imprime los datos de cada estudiante llamando a la función */
    for (i=0; i<num; i++) {
        printf("Estudiante %ld\n", i+1);
        if (imprimirDatosEstudiante(&estudiantes[i])) {
            printf("Error al imprimir los datos del estudiante %ld\n",i);
            return 1;
        }
    }
    return 0;
}
