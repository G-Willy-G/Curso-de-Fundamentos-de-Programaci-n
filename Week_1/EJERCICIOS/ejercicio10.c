#include <stdio.h>
//Added to use limits of data types, in this case for int
#include <limits.h> 

int main(void) 
{
    //Print the limits of int data type
    printf ("El valor minimo que puede tener una variable de tipo int es: %d\n", INT_MIN);
    printf ("El valor maximo que puede tener una variable de tipo int es: %d\n", INT_MAX);

    return (0);
}