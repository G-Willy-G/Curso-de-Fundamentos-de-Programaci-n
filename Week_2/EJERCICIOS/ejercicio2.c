#include <stdio.h>
int main () 
{
    int age;

    printf ("Introduce tu edad: ");
    scanf ("%d", &age);

    if (age>=18 && age%3!=0){
        printf ("Eres mayor de edad y tu edad no es multiplo de 3\n");
    } else {
        printf ("Eres menor de edad o tu edad es multiplo de 3\n");
    }

    return 0;
}