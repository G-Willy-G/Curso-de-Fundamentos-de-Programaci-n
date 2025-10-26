#include <stdio.h>
int main ()
{
    char letra;

    printf ("Introduce la letra a comprobar: ");
    scanf ("%c", &letra);

    if (letra=='A' || letra=='A' || letra=='a' || letra=='E' || letra=='e' || letra=='I' || letra=='i' || letra=='O' || letra=='o' || letra=='U' || letra=='u'){
        printf ("La letra es una vocal");
    } else {
        printf ("La letra no es una vocal");
    }
    return 0;
}