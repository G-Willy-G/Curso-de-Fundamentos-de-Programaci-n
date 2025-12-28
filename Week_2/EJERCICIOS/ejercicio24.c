//The exercise is the same as exercise 15 but using a struct
#include <stdio.h>
#include <math.h>

#define SIZE_VECTOR 3 // Constant for vector size

// Struct definition to group vector data
// This struct holds two input vectors, the sum vector, and the result norm
typedef struct {
    long    vector_1[SIZE_VECTOR];      // First input vector
    long    vector_2[SIZE_VECTOR];      // Second input vector
    long    vector_suma[SIZE_VECTOR];   // Vector to store the sum
    double  norma_euclidia;             // Variable for Euclidean norm
} vectores;

int main(void)
{
    vectores x; // Declare a variable of type 'vectores'

    // Prompt user for the first vector components
    // Accessing struct members using the dot (.) operator
    printf ("Introduce el primer componente del primer vector: ");
    scanf ("%ld", &x.vector_1[0]);
    printf ("Introduce el segundo componente del primer vector: ");
    scanf ("%ld", &x.vector_1[1]);
    printf ("Introduce el tercer componente del primer vector: ");
    scanf ("%ld", &x.vector_1[2]);

    // Prompt user for the second vector components
    printf ("Introduce el primer componente del segundo vector: ");
    scanf ("%ld", &x.vector_2[0]);
    printf ("Introduce el segundo componente del segundo vector: ");
    scanf ("%ld", &x.vector_2[1]);
    printf ("Introduce el tercer componente del segundo vector: ");
    scanf ("%ld", &x.vector_2[2]);

    // Calculate sum of vectors component by component
    x.vector_suma[0] = x.vector_1[0] + x.vector_2[0];
    x.vector_suma[1] = x.vector_1[1] + x.vector_2[1];
    x.vector_suma[2] = x.vector_1[2] + x.vector_2[2];

    // Calculate the Euclidean norm of the sum vector
    // Formula: sqrt(x^2 + y^2 + z^2)
    x.norma_euclidia = sqrt(pow(x.vector_suma[0], 2) + pow(x.vector_suma[1], 2) + pow(x.vector_suma[2], 2));
    
    // Output the resulting sum vector and its norm
    printf ("La suma del vector es: %ld %ld %ld\n", x.vector_suma[0], x.vector_suma[1], x.vector_suma[2]);
    printf ("Su norma euclidea es: %lf", x.norma_euclidia);

    return (0);
}