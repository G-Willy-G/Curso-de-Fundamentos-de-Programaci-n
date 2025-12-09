#include <stdio.h>
int main(){

    double height=0, weight=0;
    double age=0;
    char initials;

    printf ("Please enter the height in cm: ");
    scanf ("%lf", &height);
    printf ("Please enter the age in years: ");
    scanf ("%lf", &age);
    printf ("Finally, enter the initial of the name: ");
    scanf ("\n%c", &initials);
    weight = height - 100 + ((9 * age)/100);
    printf ("The ideal weight of %c, who measures %.1lf cm and is %.lf years old, is %.3lf kg.", initials, height, age, weight);

    return 0;
}