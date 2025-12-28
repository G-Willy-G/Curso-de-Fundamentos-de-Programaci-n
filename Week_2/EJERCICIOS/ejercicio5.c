#include <stdio.h>

int main(void) 
{
    long dd1, mm1, yyyy1;
    long dd2, mm2, yyyy2;
    long fecha1, fecha2;

    dd1 = 0;
    mm1 = 0;
    yyyy1 = 0;
    dd2 = 0;
    mm2 = 0;
    yyyy2 = 0;
    fecha1 = 0;
    fecha2 = 0;

    printf ("Introduce la primera fecha separada por espacios: ");
    scanf ("%ld%ld%ld", &dd1, &mm1, &yyyy1);

    printf ("Introduce la segunda fecha separada por espacios: ");
    scanf ("%ld%ld%ld", &dd2, &mm2, &yyyy2);

    fecha1 = (yyyy1 * 10000) + (mm1 * 100) + dd1;
    fecha2 = (yyyy2 * 10000) + (mm2 * 100) + dd2;

    if (fecha1 < fecha2)
    {
        printf ("La primera fecha %ld/%ld/%ld es antes que la segunda %ld/%ld/%ld\n", dd1, mm1, yyyy1, dd2, mm2, yyyy2);
    }
    else if (fecha1 > fecha2)
    {
        printf ("La primera fecha %ld/%ld/%ld es despues que la segunda %ld/%ld/%ld\n", dd1, mm1, yyyy1, dd2, mm2, yyyy2);
    }
    else
    {
        printf ("Ambas son la misma fecha\n");
    }

    return (0);
}