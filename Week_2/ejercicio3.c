#include <stdio.h>
int main (){

    int age;

    printf ("Introduce tu edad: ");
    scanf ("%d", &age);

    if (age<18){
        printf ("Eres menor de edad\n");
    } else if (age%3==0){
        printf ("Eres mayor de edad y esta es multiplo de 3");
    } else {
        printf ("Eres mayor de edad y esta no es multiplo de 3");
    }

    return 0;
}