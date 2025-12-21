#include <stdio.h>

int main(void)
{
    double nota;
    double p1;
    double p2;
    double p3;
    double p4;
    double p5;

    //Inizialize variables
    nota = 0.0;
    p1 = 0.0;
    p2 = 0.0;
    p3 = 0.0;
    p4 = 0.0;
    p5 = 0.0;
    
    //
    printf("Introduce la nota del parcial 1: ");
    scanf ("%lf", &p1);
    printf("Introduce la nota del parcial 2: ");
    scanf ("%lf", &p2);
    printf("Introduce la nota del parcial 3: ");
    scanf ("%lf", &p3);
    printf("Introduce la nota del parcial 4: ");
    scanf ("%lf", &p4);
    printf("Introduce la nota del parcial 5: ");
    scanf ("%lf", &p5);

    nota = (p1 + (2 * p2) + (2 * p3) + (2 * p4) + (3 * p5)) / 10;
    printf("Su nota media es de %.2lf", nota);

    return (0);
}

/*Alternative Main more advanced
int main(void)
{
    double grades[5];
    double mark:
    
    mark = 0;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the grade for exam %d: ", i + 1);
        scanf("%lf", &grades[i]);
    }
    mark = (grades[0] + 2 * grades[1] + 2 * grades[2] + 2 * grades[3] + 3 * grades[4]) / 10;
    printf("Your final mark is: %.2lf\n", mark);
    return (0);
}
*/