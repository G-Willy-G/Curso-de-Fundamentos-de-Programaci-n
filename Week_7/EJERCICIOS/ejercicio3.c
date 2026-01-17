#include <stdio.h>

typedef struct 
{
    long    dd;
    long    mm;
    long    yyyy;
} Fecha;

void    proximo_dia(Fecha *fecha)
{
    fecha->dd++;
    if (fecha->dd > 30 || (fecha->dd >28 && fecha->mm == 2))
    {
        fecha->dd = 1;
        fecha->mm++;
        if (fecha->mm > 12)
        {
            fecha->mm = 1;
            fecha->yyyy++;
        }
    }
}

int main(void)
{
    Fecha fecha;
    printf ("Introduce un día: ");
    scanf("%ld", &fecha.dd);
    printf ("Introduce un mes: ");
    scanf("%ld", &fecha.mm);
    printf ("Introduce un año: ");
    scanf("%ld", &fecha.yyyy);

    proximo_dia (&fecha);

    printf("La proxima fecha es: %ld/%ld/%ld\n", fecha.dd, fecha.mm, fecha.yyyy);
    return (0);
}
