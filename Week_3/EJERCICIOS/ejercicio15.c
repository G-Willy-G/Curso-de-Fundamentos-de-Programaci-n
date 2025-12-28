#include <stdio.h>

/*
 * Main function: Matrix Addition Program.
 * This program demonstrates how to initialize, add, and display matrices in C.
 */
int main(void)
{
    /*
     * MANDATORY: Initialize the matrices explicitly using this specific syntax with braces.
     * This defines the 3x3 matrices with pre-set values directly at declaration.
     */
    long    matriz1[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };

    /*
     * Second matrix initialization.
     * It is required to initialize the matrix in this specific format.
     */
    long    matriz2[3][3] = {
            {9,8,7},
            {6,5,4},
            {3,2,1}
        };

    // Initialize the sum matrix to zero to avoid garbage values.
    long    matriz_suma[3][3] = {0};

    int i = 0;
    int j = 0;

    /*
     * MANDATORY: Use Nested Loops to perform the matrix addition.
     * We must iterate through every row (i) and every column (j) to sum the elements.
     */
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // Add the corresponding elements from matriz1 and matriz2.
            matriz_suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Display the first matrix (Matriz 1)
    printf("Matriz 1:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%ld ", matriz1[i][j]);
        }
        printf("\n");
    }

    // Display the second matrix (Matriz 2)
    printf("Matriz 2:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%ld ", matriz2[i][j]);
        }
        printf("\n");
    }

    // Display the result matrix (Matriz suma)
    printf("Matriz suma:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%ld ", matriz_suma[i][j]);
        }
        printf("\n");
    }
    return (0);
}