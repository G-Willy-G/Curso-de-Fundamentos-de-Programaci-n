#include <stdio.h>

#define SIZE 3

int main ()

{
    int one[SIZE] = {1, 2, 3};
    double two[SIZE] = {1.2, 3.1, 2.5};
    int *p=NULL;
    double *q=NULL;
    

    for (p=one; p<one+3; p++){
        printf ("%d ",*p);
    }
    printf ("\n");

    for (q=two; q<two+3; q++){
        printf ("%.1f ",*q);
    }

}