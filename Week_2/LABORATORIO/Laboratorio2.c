#include <stdio.h>

#define MAX 3

void peticion_de_enteros(long array[]) {
    for (int i = 0; i < MAX; ++i) {
        printf("Introduce el termino Nº%d: ", i + 1);
        if (scanf("%ld", &array[i]) != 1) {
            fprintf(stderr, "Entrada inválida\n");
            // En un programa real podrías limpiar el buffer o salir con error.
        }
    }
}

void comparacion_de_enteros(const long array[]) {
    if (array[0] == array[1] && array[1] == array[2]) {
        printf("Los números son iguales\n");
    } else if (array[0] != array[1] && array[0] != array[2] && array[1] != array[2]) {
        printf("Los números son diferentes\n");
    } else {
        printf("Dos números son iguales y el otro es distinto\n");
    }
}

int main(void) {
    long entero[MAX];

    peticion_de_enteros(entero);
    comparacion_de_enteros(entero);

    return 0;
}
