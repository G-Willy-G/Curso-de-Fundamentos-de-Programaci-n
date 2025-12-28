#include <stdio.h>
#include <math.h>

#define SIZE_VECTOR 3 // Constant for vector size

int main(void)
{
    // Define vectors with long integer type
    long    vector_1[SIZE_VECTOR];
    long    vector_2[SIZE_VECTOR];
    long    vector_suma[SIZE_VECTOR];
    double  norma_euclidia; // Variable to store the Euclidean norm

    // Prompt user for the first vector components
    printf ("Introduce el primer componente del primer vector: ");
    scanf ("%ld", &vector_1[0]);
    printf ("Introduce el segundo componente del primer vector: ");
    scanf ("%ld", &vector_1[1]);
    printf ("Introduce el tercer componente del primer vector: ");
    scanf ("%ld", &vector_1[2]);

    // Prompt user for the second vector components
    printf ("Introduce el primer componente del segundo vector: ");
    scanf ("%ld", &vector_2[0]);
    printf ("Introduce el segundo componente del segundo vector: ");
    scanf ("%ld", &vector_2[1]);
    printf ("Introduce el tercer componente del segundo vector: ");
    scanf ("%ld", &vector_2[2]);

    // Calculate sum of vectors component by component
    vector_suma[0] = vector_1[0] + vector_2[0];
    vector_suma[1] = vector_1[1] + vector_2[1];
    vector_suma[2] = vector_1[2] + vector_2[2];

    // Calculate the Euclidean norm (sqrt(x^2 + y^2 + z^2))
    norma_euclidia = sqrt(pow(vector_suma[0], 2) + pow(vector_suma[1], 2) + pow(vector_suma[2], 2));
    
    // Output the resulting sum vector and its norm
    printf ("The sum vector is: %ld %ld %ld\n", vector_suma[0], vector_suma[1], vector_suma[2]);
    printf ("Su norma euclidea es: %lf", norma_euclidia);

    return (0);
}