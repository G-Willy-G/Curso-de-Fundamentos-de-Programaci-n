#include <stdio.h>

#define TAM 3   // Defined constant for matrix size

int main(void)
{
    int matriz[TAM][TAM];   // 3x3 Integer matrix
    int determinante;       // Variable to store the result

    // Manually initializing matrix elements
    // Row 0
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 1;
    
    // Row 1
    matriz[1][0] = 1;
    matriz[1][1] = 1;
    matriz[1][2] = 2;
    
    // Row 2
    matriz[2][0] = 3;
    matriz[2][1] = 0;
    matriz[2][2] = 3;

    // Calculate determinant using Sarrus Rule
    // (aei + bfg + cdh) - (ceg + bdi + afh)
    determinante = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + 
                   (matriz[1][0] * matriz[2][1] * matriz[0][2]) + 
                   (matriz[2][0] * matriz[0][1] * matriz[1][2]) - 
                   (matriz[0][2] * matriz[1][1] * matriz[2][0]) - 
                   (matriz[1][2] * matriz[2][1] * matriz[0][0]) - 
                   (matriz[2][2] * matriz[0][1] * matriz[1][0]);
                   
    printf ("El determiante es: %d", determinante);

    return (0);
}