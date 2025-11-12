#include <stdio.h>
int main ()
{
    float euro;
    int opccion;

    printf ("Introduce la cantidad a euros que quieres cambiar: ");
    scanf ("%f", &euro);
    
    printf ("-----------------------\nOpcciones de intercambio:\n 1. Dollar\n 2. Japanese Yen\n 3. Pound Sterling\nSelecciona el numero de la opccion deseada: ");
    scanf ("%d", &opccion);

    switch (opccion)
    {
    case 1:
        printf ("Ha cambiado %.2f euros por %.2f dolares\n", euro, euro*1.12);
        break;
    case 2:
        printf ("Ha cambiado %.2f euros por %.2f yenes\n", euro, euro*124.56);
        break;
    case 3:
        printf ("Ha cambiado %.2f euros por %.2f libras\n", euro, euro*0.86);
        break;
    default:
        printf ("Ha introducido una opccion incorrecta\n");
        break;
    }

    return 0;
}