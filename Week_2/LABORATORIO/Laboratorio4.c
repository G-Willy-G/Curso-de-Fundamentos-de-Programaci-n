/* *************************************************** */
/*                                                     */
/*  LABORATORIO NUMERO 4                               */
/*  SEMANA 2                                           */
/*                                                     */
/*  GUILLERMO GASCÓN                                   */
/*                                                     */
/* *************************************************** */



#include <stdio.h>

typedef struct {
    long entero[3];
} Enteros;

void recogida_de_numeros(Enteros *p) {
    const char *orden[] = {"primer", "segundo", "tercer"};
    int ref;

    for (int i = 0; i < 3; i++) {
        printf("Introduzca el %s número: ", orden[i]);
        ref = scanf("%ld", &p->entero[i]);
        if (ref != 1) {
            fprintf(stderr, "Número introducido incorrecto, inténtalo de nuevo.\n");
            /* limpiar el buffer hasta el fin de línea */
            int c;
            while ((c = getchar()) != '\n' && c != EOF) ;
            i--; /* repetir este índice */
        }
    }
}

void cual_es_menor(const Enteros *p) {
    long menor = p->entero[0];
    for (int i = 1; i < 3; i++) {
        if (p->entero[i] < menor) menor = p->entero[i];
    }

    /* Mostrar el menor (si hay empates, muestra el valor mínimo) */
    printf("El número %ld es el menor.\n", menor);
}

int main(void) {
    Enteros numeros;
    recogida_de_numeros(&numeros);
    cual_es_menor(&numeros);

    return 0;
}
