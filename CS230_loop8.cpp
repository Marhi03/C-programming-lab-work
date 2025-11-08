#include <stdio.h>
int main()
{
  int i, n, sum=0;
  printf("Enter a number:\n");
  scanf("%d", &n);
  for(i=0; i<=n; i++)
  {  sum = sum + (2*i); }
  printf("The sum of first %d even no.s is %d.", n, sum);
}
