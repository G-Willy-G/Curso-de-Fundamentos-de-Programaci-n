#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *imput = NULL;
    FILE *output = NULL;
    char dni[15];
    double grade;

    if (!(imput = fopen ("grades.txt", "r")) || !(output = fopen ("list.txt", "w")))
    {
        printf ("Error abriendo el archivo\n");
        return 1;
    }
    
    while (fscanf (imput, "%s %*d %*d %*d %*d %lf", dni, &grade) == 2)
    {
        if (grade < 5)
        {
            fprintf (output, "%-12s %.3lf   SUSPENSO\n", dni, grade);
        }
        else if (grade >= 5 && grade < 7)
        {
            fprintf (output, "%-12s %.3lf   APROBADO\n", dni, grade);
        }
        else if (grade >= 7 && grade < 9)
        {
            fprintf (output, "%-12s %.3lf   NOTABLE\n", dni, grade);
        }
        else
        {
            fprintf (output, "%-12s %.3lf   Sobresaliente\n", dni, grade);
        }
    }
    fclose (imput);
    fclose (output);
    return 0;
}