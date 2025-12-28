#include <stdio.h>

int main(void)
{
    long    edad;
    const long pulsaciones = 220;
    const float min_pulsaciones = 0.65;
    const float max_pulsaciones = 0.85;

    edad = 0;

    printf("Introduce tu edad: ");
    scanf ("%ld", &edad);

    printf("Te corresponden unas pulsaciones miminas de %.0f y maximas de %.0f", (min_pulsaciones * (pulsaciones - (float) edad)), (max_pulsaciones * (pulsaciones - (float) edad)));
    return (0);
}