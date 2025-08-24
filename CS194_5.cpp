#include <stdio.h>
int main()
{
   /*This program is to add, sub, multiply and divide 2 nos.*/
   int a, b, c, d, e, f;
   printf("Enter 2 Nos.");
   scanf("%d%d", &a, &b);
   c = a + b;
   d = a - b;
   e = a*b;
   f = a/b;
   printf("%d is the sum of 2 nos.\n", c);
   printf("%d is the difference of 2 nos.\n", d);
   printf("%d is the product of 2 nos.\n", e);
   printf("%d is the answer of division of 2 nos.\n", f);
}
