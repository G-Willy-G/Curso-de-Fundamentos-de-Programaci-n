#include <stdio.h>
#include <math.h>
#define SIZE_VECTOR 3
typedef struct {
    int vector1[SIZE_VECTOR];
    int vector2[SIZE_VECTOR];
    int vector3[SIZE_VECTOR];
    double norma_euclidia;
} vectores;

int main ()
{
    
    vectores x;
    printf ("Enter the first component of the first vector: ");
    scanf ("%d", &x.vector1[0]);
    printf ("Enter the second component of the first vector: ");
    scanf ("%d", &x.vector1[1]);
    printf ("Enter the third component of the first vector: ");
    scanf ("%d", &x.vector1[2]);

    printf ("Enter the first component of the second vector: ");
    scanf ("%d", &x.vector2[0]);
    printf ("Enter the second component of the second vector: ");
    scanf ("%d", &x.vector2[1]);
    printf ("Enter the third component of the second vector: ");
    scanf ("%d", &x.vector2[2]);

    x.vector3[0] = x.vector1[0] + x.vector2[0];
    x.vector3[1] = x.vector1[1] + x.vector2[1];
    x.vector3[2] = x.vector1[2] + x.vector2[2];

    x.norma_euclidia= sqrt(pow(x.vector3[0],2)+pow(x.vector3[1],2)+ pow(x.vector3[2],2));
    printf ("The sum vector is: %d %d %d\n", x.vector3[0],x.vector3[1],x.vector3[2]);
    printf ("Su norma euclidea es: %lf", x.norma_euclidia);

    return 0;
}