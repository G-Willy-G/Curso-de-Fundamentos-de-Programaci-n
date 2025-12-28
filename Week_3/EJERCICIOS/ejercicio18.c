#include <stdio.h> 

int main()
{
  int i, j, a, r, n, pot, serie;
  
  printf("Enter first term of the series: ");
  scanf("%d", &a);
  
  printf("Enter ratio: ");
  scanf("%d", &r);
  
  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  for(i=0,serie=0; i<n; i++) {
    for(j=0, pot=1; j<i; j++)
      pot*=r;
    serie+=a*pot;
  }

  printf("Value of a geometric series with %d elements, ratio equals %d and first term equals %d is: %d\n",n,r,a,serie);

    return 0;
}
