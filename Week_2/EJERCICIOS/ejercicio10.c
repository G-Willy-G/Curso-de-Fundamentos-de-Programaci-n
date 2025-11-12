#include <stdio.h>
int main ()
{

    int a,b,c;
    printf ("Introduce el primer numero entero: ");
    scanf ("%d", &a);
    printf ("Introduce el segundo numero entero: ");
    scanf ("%d", &b);
    printf ("Introduce el tercer numero entero: ");
    scanf ("%d", &c);

    if (a>b && a>c){
        printf ("%d es mayor a %d y a %d", a,b,c);
    } else if (b>a && b>c){
        printf ("%d es mayor a %d y a %d", b,a,c);
    } else {
        printf ("%d es mayor a %d y a %d", c,b,a);
    }

    return 0;
}