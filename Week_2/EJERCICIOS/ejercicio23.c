#include <stdio.h>
#include <string.h>

#define STRING_LONG 20  // Constant for maximum string length

int main(void)
{
    char    mes[STRING_LONG];   // Buffer to store the month name

    // Prompt user for a month
    printf ("Introduce un mes: ");
    scanf ("%s", mes);

    // Check months with 31 days
    // Fixed bug: Replaced "Noviembre" with "Diciembre" in this list
    if (strcmp(mes, "Enero") == 0 || strcmp(mes, "Marzo") == 0 || 
        strcmp(mes, "Mayo") == 0 || strcmp(mes, "Julio") == 0 || 
        strcmp(mes, "Agosto") == 0 || strcmp(mes, "Octubre") == 0 || 
        strcmp(mes, "Diciembre") == 0) 
    {
        printf ("El mes tiene 31 dias.");
    } 
    // Check months with 30 days
    else if (strcmp(mes, "Abril") == 0 || strcmp(mes, "Junio") == 0 || 
             strcmp(mes, "Septiembre") == 0 || strcmp(mes, "Noviembre") == 0)
    {
        printf ("El mes tiene 30 dias");
    } 
    // Check February (28 days, ignoring leap years for simplicity)
    else if (strcmp(mes, "Febrero") == 0)
    {
        printf ("El mes tiene 28 dias");
    } 
    else 
    {
        // Handle invalid input
        printf ("Ha introducido un mes incorrecto");
    }

    return (0);
}