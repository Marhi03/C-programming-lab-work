#include <stdio.h>
int main()
{
  /*This program prints the largest and smallest no.*/
  int a, b;
  printf("Enter 2 Nos.\n");
  scanf("%d%d", &a, &b);
  if(a==b)
  {printf("Both are equal.");}
  else
  if(a>b)
  {printf("%d is the largest.\n", a);
   printf("%d is smallest.\n", b);}
   else
   {printf("%d is the largest.\n", b);
   printf("%d is smallest.\n", a);}
}
