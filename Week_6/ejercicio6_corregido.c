#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
  char s[SIZE], new[SIZE];
  long i, j, mid, size;
  
  printf("Enter a string of characters: ");
  scanf("%s", s);
  
  size=strlen(s);
  mid = size/2;
    
  printf("String \"%s\" has a length of %ld characters and the middle is in position %ld\n", s, size, mid);
    
  for(i=mid, j=0; i<size; i++, j++)
    new[j]=s[i];
  new[j]=0;
    
  printf("The second half of the string \"%s\" is \"%s\"\n", s, new);
    
  return 0;
}