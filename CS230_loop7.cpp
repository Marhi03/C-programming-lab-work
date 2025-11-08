#include <stdio.h>
int main()
{
  int i, n, sum=0;
  printf("Enter a number:\n");
  scanf("%d", &n);
  for(i=0; i<=n; i++)
  {  sum = sum + ((2*i) - 1); }
  printf("The sum of first %d odd no.s is %d.", n, sum);
}
