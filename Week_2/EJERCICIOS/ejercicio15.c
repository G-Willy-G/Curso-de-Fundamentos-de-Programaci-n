#include <stdio.h>
#include <math.h>
#define SIZE_VECTOR 3

int main ()
{
    int vector1[SIZE_VECTOR], vector2[SIZE_VECTOR], vector3[SIZE_VECTOR];
    double norma_euclidia;

    printf ("Enter the first component of the first vector: ");
    scanf ("%d", &vector1[0]);
    printf ("Enter the second component of the first vector: ");
    scanf ("%d", &vector1[1]);
    printf ("Enter the third component of the first vector: ");
    scanf ("%d", &vector1[2]);

    printf ("Enter the first component of the second vector: ");
    scanf ("%d", &vector2[0]);
    printf ("Enter the second component of the second vector: ");
    scanf ("%d", &vector2[1]);
    printf ("Enter the third component of the second vector: ");
    scanf ("%d", &vector2[2]);

    vector3[0] = vector1[0]+vector2[0];
    vector3[1] = vector1[1]+vector2[1];
    vector3[2] = vector1[2]+vector2[2];

    norma_euclidia= sqrt(pow(vector3[0],2)+pow(vector3[1],2)+ pow(vector3[2],2));
    printf ("The sum vector is: %d %d %d\n", vector3[0],vector3[1],vector3[2]);
    printf ("Su norma euclidea es: %lf", norma_euclidia);

    return 0;
}