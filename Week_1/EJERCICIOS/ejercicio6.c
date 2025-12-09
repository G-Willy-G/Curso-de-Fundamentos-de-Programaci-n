#include <stdio.h>
int main () {

    short variable1 = -32768;
    unsigned short variable2 = 65535;
    long variable3 = -2147483648;
    unsigned long variable4 = 4294967293;
    int variable5 = -2147483647;
    unsigned int variable6 = 4294967293;
    float variable7 = 0.000000000000000000000000000000000000012;
    double variable8 = 0.0000000000000000000000000000000000000000069;
    char variable9 = '@';

    printf ("\nEsta es la variable short que admite numeros negativos (%hi) \ny este el valor de la variable short que no admite signo (%hu)\n", variable1, variable2);
    printf ("\nEsta es la variable long que admite numeros negativos (%ld) y este también es el valor (%li). Ademas, este el valor de la variable long que no admite signo (%lu)\n", variable3, variable3, variable4);
    printf ("\nEsta es la variable int que admite numeros negativos (%d) y este también es el valor (%i). Ademas, este el valor de la variable int que no admite signo (%u)\n", variable5, variable5, variable6);
    printf ("\nEsta es la variable float en formato decimal (%f), esta en formato normal (%e) y este en cientifico (%g)\n", variable7, variable7, variable7);
    printf ("\nEsta es la variable double en sus diferentes modos (%lf), (%le) y (%lg)", variable8, variable8, variable8);
    printf ("\nEsta es la variable char (%c)\n", variable9);

    return 0;
}