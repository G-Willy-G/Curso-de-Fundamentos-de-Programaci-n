#include <stdio.h>
#include <string.h>

#define STRING_LONG 20

int main ()

{
    char mes [STRING_LONG];

    printf ("Introduce un mes: ");
    scanf ("%s", mes);

    if (strcmp(mes,"Enero")==0 || strcmp(mes,"Marzo")==0 || strcmp(mes,"Mayo")==0 || strcmp(mes,"Julio")==0 || strcmp(mes,"Agosto")==0 || strcmp(mes,"Octubre")==0 || strcmp(mes,"Noviembre")==0) {
        printf (" El mes tiene 31 dias.");
    } else if (strcmp(mes,"Abril")==0 || strcmp(mes,"Junio")==0 || strcmp(mes,"Septiembre")==0 || strcmp(mes,"Noviembre")==0){
        printf (" El mes tiene 30 dias");
    } else if (strcmp(mes,"Febrero")==0){
        printf (" El mes tiene 28 dias");
    } else {
        printf ("Ha introducido un mes incorrecto");
    }


    return 0;
}