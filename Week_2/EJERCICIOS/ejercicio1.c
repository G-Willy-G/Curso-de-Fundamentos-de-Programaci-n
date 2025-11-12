#include <stdio.h>
int main ()
{
    int age, condicion;

    printf ("Introduce tu Edad: ");
    scanf ("%d", &age);
    
    condicion = ((age >= 18) && (age%3)!=0);
    printf ("La variable es : %d\n", condicion);

    return 0;
}