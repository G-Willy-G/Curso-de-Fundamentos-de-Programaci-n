#include <stdio.h>

int main(void)
{
    char    inicial[2];
    double    altura[2];

    printf("Introduce la inicial del nombre de la primera persona: ");
    scanf("%s", &inicial[0]);

    printf("Introduce la altura de la primera persona: ");
    scanf("%lf", &altura[0]);

    printf("Introduce la inicial del nombre de la segunda persona: ");
    scanf("%s", &inicial[1]);

    printf("Introduce la altura de la segunda persona: ");
    scanf("%lf", &altura[1]);

    printf ("El peso ideal de %c es de %.1lf kg\n", inicial[0], (altura[0] - 100 - (altura[0] - 150) / 4));
    printf ("El peso ideal de %c es de %.1lf kg\n", inicial[1], (altura[1] - 100 - (altura[1] - 150) / 4));
    printf ("La media de peso entre los dos es %.1lf kg\n", ((altura[0] - 100 - (altura[0] - 150) / 4) + (altura[1] - 100 - (altura[1] - 150) / 4)) / 2);
    return (0);
}