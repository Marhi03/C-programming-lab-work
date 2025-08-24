#include <stdio.h>
int main()
{
   /*This program gives avg and total marks of 3 sub.*/
   int a, b, c, d;
   float e;
   printf("Enter the marks of three subjects.\n");
   scanf("%d%d%d", &a, &b, &c);
   d = a + b + c;
   e = d/3.0;
   printf("The total marks are %d.\n", d);
   printf("The average marks are %.2f.\n", e);
}
