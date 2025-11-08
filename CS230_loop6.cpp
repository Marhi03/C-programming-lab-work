#include <stdio.h>
int main()
{
  int i, n, sum=0;
  printf("Enter the number:\n");
  scanf("%d", &n);
  for(i=0; i<=n; i++)
  {
    sum = sum + i;
  }
  printf("The sum of %d natural numbers is %d", n, sum);
}
