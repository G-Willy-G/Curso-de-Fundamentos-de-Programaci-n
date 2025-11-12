#include <stdio.h>
int main () 
{

    int dd1, dd2, mm1, mm2, yyyy1, yyyy2;

    printf ("Introduce la primera fecha separada por espacios: ");
    scanf ("%d%d%d", &dd1, &mm1, &yyyy1);

    printf ("Introduce la segunda fecha separada por espacios: ");
    scanf ("%d%d%d", &dd2, &mm2, &yyyy2);

    if (yyyy1 < yyyy2){
        printf ("La primera fecha %d/%d/%d es antes que la segunda %d/%d/%d\n", dd1,mm1,yyyy1,dd2,mm2,yyyy2);
    } else if (yyyy2 < yyyy1) {
        printf ("La primera fecha %d/%d/%d es despues que la segunda %d/%d/%d\n", dd1,mm1,yyyy1,dd2,mm2,yyyy2);
    } else if (mm1 < mm2){
        printf ("La primera fecha %d/%d/%d es antes que la segunda %d/%d/%d\n", dd1,mm1,yyyy1,dd2,mm2,yyyy2);
    } else if (mm2 < mm1){
        printf ("La primera fecha %d/%d/%d es despues que la segunda %d/%d/%d\n", dd1,mm1,yyyy1,dd2,mm2,yyyy2);
    } else if (dd1 < dd2){
        printf ("La primera fecha %d/%d/%d es antes que la segunda %d/%d/%d\n", dd1,mm1,yyyy1,dd2,mm2,yyyy2);
    } else if (dd2 < dd1){
        printf ("La primera fecha %d/%d/%d es despues que la segunda %d/%d/%d\n", dd1,mm1,yyyy1,dd2,mm2,yyyy2);
    } else  {
        printf ("Ambas son la misma fecha\n");
    }

    return 0;
}