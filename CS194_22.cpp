#include <stdio.h>
int main()
{
   /*This program gives the net sales.*/
   int a, b, c;
   printf("Enter the Gross sales.\n");
   scanf("%d", &a);
   b = (10*a)/100;
   c = a - b;
   printf("The net sales is %d.", c);
}
