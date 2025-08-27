#include <stdio.h>
int main()
{
  int i, n;
  printf("Enter a value\n");
  scanf("%d", &n);
  i = -1;
  while(i<n)
  {
     i = i + 2;
     printf("%d ", i);
  }
}
