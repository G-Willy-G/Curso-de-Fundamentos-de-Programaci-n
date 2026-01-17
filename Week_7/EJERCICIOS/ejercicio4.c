#include <stdio.h>
#include <string.h>

#define SIZE 100

short countWords(char *string, long *nWords)
{
    long    i;
    long    dentro;

    *nWords = 0;
    dentro = 0;

    if (string == NULL)
    {
        return (0);
    }
    for (i = 0; string[i] != '\0'; i++)
    {
        
        if (string[i] != ' ' && string[i] != '\n')
        {
            if (!dentro)
            {
                (*nWords)++;
                dentro = 1;
            }
        }
        else 
        {
            dentro = 0;
        }
    }
    return (1);
}

int main(void)
{
    char    string[SIZE];
    long    cantidad_palabras;

    cantidad_palabras = 0;

    printf("Introduzca el string: ");
    if (fgets(string, SIZE, stdin) != NULL)

    countWords(string, &cantidad_palabras);

    printf ("Hay %ld palabras en el string: %s", cantidad_palabras, string);
    return 0;
}