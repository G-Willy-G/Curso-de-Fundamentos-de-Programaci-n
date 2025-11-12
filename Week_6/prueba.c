#include <stdio.h>
#define DIM 20
 
int main ()
{
  long length;
  char s[DIM];
  char *p;

  printf ("Enter a string of characters: ");
  scanf ("%s", s);
  
  for (length=0, p=s; *p; p++)
    length++;
 
  printf ("%s is %ld.charecter-length\n", s, length);

  return 0;
}