#include <stdio.h>
#define dollar 1.12
#define yen 124.56
#define pounds 0.86

typedef enum {dolares=1,yennes,libras} Currency;

int main ()

{
    float euros;
    int opccion;

    printf ("___________________\n");
    printf (" Introduce la Cantidad de euros a intercambiar: ");
    scanf ("%f", euros);
    printf ("___________________\n");
    printf (" 1. Dolares\n 2. Yennes\n 3. Libras\n");
    printf ("Introduce el numero del tipo de intercambio: ");
    scanf ("%d", &opccion);

    switch (opccion)
    {
    case dolares:
        printf ("Sus %.2f euros se transforman en %.2f", euros, euros * dollar);
        break;
    case yennes:
        printf ("Sus %.2f euros se transforman en %.2f", euros, euros * yen);
        break;
    case libras:
        printf ("Sus %.2f euros se transforman en %.2f", euros, euros * pounds);
        break;
    default:
        printf ("Has seleccionado una opcción incorrecta");
        break;
    }

    return 0;
}