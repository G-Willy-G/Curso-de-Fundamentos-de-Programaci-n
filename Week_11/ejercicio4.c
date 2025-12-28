#include <stdio.h>
#include <stdlib.h>

#define DIM 15
#define Numero_estudiantes 100

typedef struct  {

  char   DNI[DIM];
  int    model;
  int    nac;
  int    nfa;
  int    nbl;
  double grade;

} Student;

int main(void)
{
    Student *estudiantes;

    estudiantes = (Student *) calloc (Numero_estudiantes, sizeof(Student));
    if (estudiantes == NULL) {
        printf("Error en la reserva de memoria\n");
        return 1;
    }
    /* Aquí iría el código para usar el array de estructuras */ 
    free(estudiantes);
    return 0;
    
}