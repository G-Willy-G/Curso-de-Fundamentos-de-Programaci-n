#include <stdio.h>

#define MAX 2

typedef struct {
    long enteros[MAX];
} Numeros;

void peticion_de_numeros(Numeros *enteros)
{
    int ret;
    printf("Introduzca %d números:\n", MAX);

    for (int i = 0; i < MAX; i++) {
        printf("Número %d: ", i + 1);
        ret = scanf("%ld", &enteros->enteros[i]);
        if (ret != 1) {
            fprintf(stderr, "Número introducido incorrecto, inténtalo de nuevo.\n");
            /* limpiar el buffer hasta el fin de línea */
            int c;
            while ((c = getchar()) != '\n' && c != EOF) ;
            i--; /* repetir este índice */
        }
    }
}

void comprobacion_de_numeros(const Numeros *enteros)
{
    const char *par = "par";
    const char *impar = "impar";

    for (int i = 0; i < MAX; i++) {
        printf("El número %ld es %s.\n", enteros->enteros[i], (enteros->enteros[i] % 2 == 0) ? par : impar);
    }
}

int main(void)
{
    Numeros enteros;

    peticion_de_numeros(&enteros);
    comprobacion_de_numeros(&enteros);

    return 0;
}