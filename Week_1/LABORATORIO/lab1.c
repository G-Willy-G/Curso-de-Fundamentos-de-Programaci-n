#include <stdio.h>
int main () {

    double weight[2], height[2];
    char initials[2];

    printf ("Please enter the initial of the first person: ");
    scanf ("\n%c", &initials[0]);
    printf ("Please enter the height of the first person (in centimeters): ");
    scanf ("%lf", &height[0]);

    printf ("Please enter the initial of the sencond person: ");
    scanf ("\n%c", &initials[1]);
    printf ("Please enter the height of the second person (in centimeters): ");
    scanf ("%lf", &height[1]);

    weight[0]= height[0] - 100 - ((height[0] - 150) / 4);
    weight[1]= height[1] - 100 - ((height[1] - 150) / 4);

    printf ("The ideal weight of %c is %.1lf kg", initials[0], weight[0]);
    printf ("\nThe ideal weight of %c is %.1lf kg", initials[1], weight[1]);
    printf ("\nThe average of both ideal weights is %.1lf kg", (weight[0]+weight[1])/2);

    return 0;
}