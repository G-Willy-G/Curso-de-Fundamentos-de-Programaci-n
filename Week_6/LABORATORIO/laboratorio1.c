#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE 100

int main(void)
{
  char  texto[SIZE];
  char  nuevo_texto[SIZE];
  long  i;
  long  j;
  long  medio;
  long  longitud;

  printf("Introduce un string: ");
  scanf("%s", texto);

  longitud = strlen(texto);
  medio = round ((double)longitud / 2);

  printf("El String \"%s\" tiene una longitud de %ld caracteres y la mitad esta en la posicion %ld\n", texto, longitud, medio);

  for(i = medio, j = 0; i < longitud; i++, j++)
  {
  nuevo_texto[j] = texto[i];
  }

  nuevo_texto[j]= '\0';

  printf("La segunda mitad del string \"%s\" es \"%s\"\n", texto, nuevo_texto);
    
  return (0);
}