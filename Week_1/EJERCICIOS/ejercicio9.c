#include <stdio.h>

int main(void) 
{
    //The sizeof operator returns the size in bytes of a data type
    printf ("La variable de tipo short es %ld bytes\n", sizeof(short));
    printf ("La variable de tipo unsigned short es %ld bytes\n", sizeof(unsigned short));
    printf ("La variable de tipo long es %ld bytes\n", sizeof(long));
    printf ("La variable de tipo unsigned long es %ld bytes\n", sizeof(unsigned long));
    printf ("La variable de tipo int es %ld bytes\n", sizeof(int));
    printf ("La variable de tipo unsigned int es %ld bytes\n", sizeof(unsigned int));
    printf ("La variable de tipo float es %ld bytes\n", sizeof(float));
    printf ("La variable de tipo double es %ld bytes\n", sizeof(double));
    printf ("La variable de tipo char es %ld bytes\n", sizeof(char));
    return (0);
}