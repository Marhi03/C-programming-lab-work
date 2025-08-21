#include <stdio.h>
int main()
{
   int a;
   printf("Enter a Number to check its divisibility by 7.\n");
   scanf("%d", &a);
   if(a%7)
     printf("%d is not divisible by 7.\n");
   else
     printf("%d is divisible by 7.\n");
}
