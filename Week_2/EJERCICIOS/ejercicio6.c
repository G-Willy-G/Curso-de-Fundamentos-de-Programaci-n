#include <stdio.h>
int main () 
{
    
    float euros;
    char opccion;

    printf ("___________________________\n\n Introduce la cantidad a Convertir: ");
    scanf ("%f", &euros);
    printf ("Conversiones posibles: \n {D} Dollar\n {Y} Yen\n {P} Pound \nEscribe la letra de la moneda a la que deseas convertir la cantidad: ");
    scanf ("\n%c", &opccion);

    switch (opccion)
    {
    case 'D':
    case 'd':
        printf ("La cantidad Convertida a dolares es %.2f\n", euros*1.12);
        break;
    case 'Y':
    case 'y':
        printf ("La cantidad Convertida a yenes es %.2f\n", euros*124.56);
        break;
    case 'P':
    case 'p':
        printf ("La cantidad Convertida a pound es %.2f\n", euros*0.86);
        break;
    default:
        printf ("La opccion introducida es incorrecta\n");
        break;
    }

    


    return 0;
}