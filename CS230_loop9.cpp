#include <stdio.h>
int main()
{
  int n, i, fac=1;
  printf("Enter a number:\n");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
  fac = fac * i;
  printf("The factorial of %d is %d.", n, fac);
}
