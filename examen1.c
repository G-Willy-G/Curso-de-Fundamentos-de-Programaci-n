#include <stdio.h>
#define TAM 1000
typedef struct {
    int array[TAM];
    int numElems;
} Coleccion;

int main ()

{
    int i, m, j=0, multiplo;
    Coleccion primero, segundo;
    primero.numElems=0;
    segundo.numElems=0;

    do
    {
        printf ("Introduce el numero de elementos de la primera coleccion (1-1000): ");
        scanf ("%d", &primero.numElems);
    } while (primero.numElems<1 && primero.numElems>TAM);

    for (i=0; i<primero.numElems; i++){
        printf ("Valor %i: ", i+1);
        scanf ("%d", &primero.array[i]);
    }

    printf ("Introduce el valor de m: ");
    scanf ("%d", &m);
    printf ("\n");

    for (i=primero.numElems; i>=0; i--) {
        if (primero.array[i]%2 !=0 && primero.array[i]>=1){
            segundo.array[j] = primero.array[i];
            j++;
            segundo.numElems++;
        }
    }

    printf ("Datos de la segunda coleccion:\n");
    printf ("Numero de elementos: %d\n", segundo.numElems);
    printf ("Elementos: ");
    for (i=0;i<segundo.numElems;i++){
        printf ("%d ", segundo.array[i]);
    }

    for (i=0, multiplo=0; i < segundo.numElems; i++)
    {
        if (segundo.array[i]%m == 0){
            multiplo++;
        }
    }

    if (multiplo > 0) {
        printf ("\nHay %d multiplos de %d en la segunda coleccion.", multiplo, m);
    } else {
        printf ("\nNo hay multiplos de %d en la segunda coleccion.", m);
    }
    
    
    return 0;
}