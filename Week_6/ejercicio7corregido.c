 #include <stdio.h>
#include <string.h>
 
#define SIZE 30
 
long string2UpperCaseLetter(char *s)
{
  long i;
  
  for (i=0; i<strlen(s); i++)
    if (s[i]>='a' && s[i]<='z')
      s[i]-='a'-'A'; 
  
  return strlen(s);
}
 
//a only-pointer version would be

/*
long string2UpperCaseLetter(char * s)
{
  long i;
  
  for (i=0; (*s)!=0; s++, i++)
    if (s[i]>='a' && s[i]<='z')
      (*s)-='a'-'A'; 
  
  return i;
}
*/
 
int main()
{
  char s[SIZE];
  long l;
  
  printf("Enter a lowercase string: ");
  scanf("%s", s);
  
  l=string2UpperCaseLetter(s);
  
  printf("The string in uppercase letters is \"%s\" and its length is %ld\n", s, l);
  
  return 0;
}