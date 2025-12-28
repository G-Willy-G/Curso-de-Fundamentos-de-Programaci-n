#include <stdio.h>

int main(void) 
{
    long    age;

    age = 0;

    printf ("Introduce tu edad: ");
    scanf ("%ld", &age);

    if ((age >= 18) && (age%3 != 0)){
        printf ("Eres mayor de edad y tu edad no es multiplo de 3\n");
    } else {
        printf ("Eres menor de edad o tu edad es multiplo de 3\n");
    }
    return (0);
}