#include <stdio.h>
#include <string.h>

#define MAX 100
int main(void)
{
    char    palabra1[MAX];
    char    palabra2[MAX];
    long    i;

    printf("Introduce una primera palabra: ");
    scanf ("%s", palabra1);

    printf("Introduce una segunda palabra: ");
    scanf ("%s", palabra2);

    for (i = 0; palabra1[i] != '\0'; i++)
    {
        printf ("%c", palabra1[i]);
    }
    for (i = strlen (palabra2); i >= 0; i--)
    {
        printf ("%c", palabra2[i]);
    }
    return (0);
}