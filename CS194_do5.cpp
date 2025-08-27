#include <stdio.h>
int main()
{
  int i, n;
  printf("Enter a value\n");
  scanf("%d", &n);
  i = -1;
  do
  {
     i = i + 2;
     printf("%d ", i);
  } while(i<n);
}
