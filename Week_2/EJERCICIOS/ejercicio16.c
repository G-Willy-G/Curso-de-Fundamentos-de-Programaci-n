#include <stdio.h>
#define TAM 3
int main ()
{
    int matriz [TAM][TAM], determinante;

    matriz[0][0]=1;
    matriz[0][1]=2;
    matriz[0][2]=1;
    matriz[1][0]=1;
    matriz[1][1]=1;
    matriz[1][2]=2;
    matriz[2][0]=3;
    matriz[2][1]=0;
    matriz[2][2]=3;

    determinante = matriz[0][0]*matriz[1][1]*matriz[2][2] + matriz[1][0]*matriz[2][1]*matriz[0][2] + matriz[2][0]*matriz[0][1]*matriz[1][2] - matriz[0][2]*matriz[1][1]*matriz[2][0] - matriz[1][2]*matriz[2][1]*matriz[0][0] - matriz[2][2]*matriz[0][1]*matriz[1][0];
    printf ("El determiante es: %d", determinante);


    return 0;
}