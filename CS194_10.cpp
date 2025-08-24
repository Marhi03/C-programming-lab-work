#include <stdio.h>
int main()
{
   /*This program converts dollar to pounds.*/
   int a, b, c;
   printf("Enter the value of dollars that is to be converted to pounds.");
   scanf("%d", &a);
   b = a*48;
   c = b/70;
   printf("%d is the answer.", c);
}
