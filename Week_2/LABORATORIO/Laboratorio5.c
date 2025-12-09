#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* constantes sin punto y coma */
#define MAX_LONGITUD_NOMBRE 50
#define TAMANO_PERSONAS 2

typedef struct {
    char nombre[MAX_LONGITUD_NOMBRE];
    long edad;
} Persona;

typedef struct {
    Persona personas[TAMANO_PERSONAS];
    double media_edades;
} Personas;

/* Lee nombres (con espacios) y edades con validación sencilla. */
void recoleccion_edades(Personas *p) {
    char buf[128];
    for (int i = 0; i < TAMANO_PERSONAS; i++) {
        /* Nombre: usar fgets para aceptar espacios */
        while (1) {
            printf("Introduzca el Nombre de la persona %d: ", i + 1);
            if (!fgets(p->personas[i].nombre, MAX_LONGITUD_NOMBRE, stdin)) {
                fprintf(stderr, "Error leyendo nombre.\n");
                exit(EXIT_FAILURE);
            }
            /* eliminar salto de línea si existe */
            size_t len = strlen(p->personas[i].nombre);
            if (len > 0 && p->personas[i].nombre[len - 1] == '\n')
                p->personas[i].nombre[len - 1] = '\0';
            if (p->personas[i].nombre[0] == '\0') {
                fprintf(stderr, "Nombre vacío, introduce un nombre válido.\n");
                continue;
            }
            break;
        }

        /* Edad: leer línea y convertir con strtol para validar */
        while (1) {
            printf("Introduzca la Edad de %s: ", p->personas[i].nombre);
            if (!fgets(buf, sizeof buf, stdin)) {
                fprintf(stderr, "Error leyendo edad.\n");
                exit(EXIT_FAILURE);
            }
            char *endptr;
            long edad = strtol(buf, &endptr, 10);
            /* endptr apunta al primer carácter no numérico */
            if (endptr == buf || (*endptr != '\n' && *endptr != '\0')) {
                fprintf(stderr, "Edad inválida, introduce un número entero.\n");
                continue;
            }
            if (edad < 0 || edad > 150) {
                fprintf(stderr, "Edad fuera de rango (0-150).\n");
                continue;
            }
            p->personas[i].edad = edad;
            break;
        }
    }
}

/* Calcula la media de edades (double) e imprime el resultado. */
void calcular_media_edades(Personas *p) {
    long suma = 0;
    for (int i = 0; i < TAMANO_PERSONAS; i++) suma += p->personas[i].edad;
    p->media_edades = (double)suma / (double)TAMANO_PERSONAS;
    printf("La media de edades es de %.2f\n", p->media_edades);
}

int main(void) {
    Personas actividad = {0};

    recoleccion_edades(&actividad);
    calcular_media_edades(&actividad);

    /* opción: listar personas y edades */
    printf("\nPersonas introducidas:\n");
    for (int i = 0; i < TAMANO_PERSONAS; i++) {
        printf("%d) %s — %ld años\n", i + 1, actividad.personas[i].nombre, actividad.personas[i].edad);
    }

    return 0;
}
