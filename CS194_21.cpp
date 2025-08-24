#include <stdio.h>
int main()
{
   /*This program gives the net salary.*/
   int a, b, c, d;
   printf("Enter the Gross salary.\n");
   scanf("%d", &a);
   b = (10*a)/100;
   c = (3*a)/100;
   d = a + b -c;
   printf("The net salary is %d.", d);
}
