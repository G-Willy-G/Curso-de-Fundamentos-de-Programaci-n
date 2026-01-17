#include <stdio.h>
#include <string.h>

#define SIZE 100

long    swift(char *string)
{
    char    temp[SIZE];
    long    i;
    long    j;

    for (i = strlen(string), j = 0; i > 0; i--, j++)
    {
        temp[j] = string[i - 1];
    }
    temp[j] = '\0';
    strcpy(string,temp);
    return (strlen(string));
}

int main(void)
{
    char    string[SIZE];


    printf ("Introduce un string: ");
    scanf ("%s", string);


    printf ("El nuevo string es: %s\nY tiene un tamaño de: %ld\n", string, swift(string));
}