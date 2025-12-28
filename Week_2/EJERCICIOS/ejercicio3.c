#include <stdio.h>
int main(void){

    long    age;

    age = 0;

    printf ("Introduce tu edad: ");
    scanf ("%ld", &age);

    if (age < 18){
        printf ("Eres menor de edad\n");
    } else if (age%3 == 0){
        printf ("Eres mayor de edad y esta es multiplo de 3\n");
    } else {
        printf ("Eres mayor de edad y esta no es multiplo de 3\n");
    }
    return (0);
}