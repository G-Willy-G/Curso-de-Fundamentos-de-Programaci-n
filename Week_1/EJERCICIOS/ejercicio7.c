#include <stdio.h>

int main(void) 
{
    //Declaration of variables
    short variable1 = 0;
    unsigned short variable2 = 0;
    long variable3 = 0;
    unsigned long variable4 = 0;
    int variable5 = 0;
    unsigned int variable6 = 0;
    float variable7 = 0;
    double variable8 = 0;
    char variable9 = 0;

    //Input from user
    printf ("\nIntroduce el valor que quieres asignar a short (-32,768 - 32,767): ");
    scanf ("%hi", &variable1);
    printf ("\nIntroduce el valor que quieres asignar a unsigned short (0 - 65,535): ");
    scanf ("\n%hu", &variable2);
    printf ("\nIntroduce el valor que quieres asignar a long (-2,147,483,648 a 2,147,483,647): ");
    scanf ("\n%ld", &variable3);
    printf ("\nIntroduce el valor que quieres asignar a unsigned long (0 a 4,294,967,295): ");
    scanf ("\n%lu", &variable4);
    printf ("\nIntroduce el valor que quieres asignar a int (-2,147,483,648 a 2,147,483,647): ");
    scanf ("\n%d", &variable5);
    printf ("\nIntroduce el valor que quieres asignar a unsigned int (0 a 4,294,967,295): ");
    scanf ("\n%u", &variable6);
    printf ("\nIntroduce el valor que quieres asignar a float (1.2e-38 a 3.4e+38): ");
    scanf ("\n%f", &variable7);
    printf ("\nIntroduce el valor que quieres asignar a double (2.3e-308 a 1.7e+308: ");
    scanf ("\n%lf", &variable8);
    printf ("Introduce el valor que quieres asignar a char: ");
    scanf ("%c", &variable9);

    printf ("-------------------------------------------------");
    printf ("\nEsta es la variable short que admite numeros negativos (%hi) \ny este el valor de la variable short que no admite signo (%hu)\n", variable1, variable2);
    printf ("-------------------------------------------------");
    printf ("\nEsta es la variable long que admite numeros negativos (%ld) y este también es el valor (%li). Ademas, este el valor de la variable long que no admite signo (%lu)\n", variable3, variable3, variable4);
    printf ("-------------------------------------------------");
    printf ("\nEsta es la variable int que admite numeros negativos (%d) y este también es el valor (%i). Ademas, este el valor de la variable int que no admite signo (%u)\n", variable5, variable5, variable6);
    printf ("-------------------------------------------------");
    printf ("\nEsta es la variable float en formato decimal (%f), esta en formato normal (%e) y este en cientifico (%g)\n", variable7, variable7, variable7);
    printf ("-------------------------------------------------");
    printf ("\nEsta es la variable double en sus diferentes modos (%lf), (%le) y (%lg)", variable8, variable8, variable8);
    printf ("-------------------------------------------------");
    printf ("\nEsta es la variable char (%c)\n", variable9);

    

    return 0;
}