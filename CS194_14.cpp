#include <stdio.h>
int main()
{
   /*This program converts celsius to farenheit.*/
   int a;
   float b;
   printf("Enter the value of temp. in celsius.");
   scanf("%d", &a);
   b = ((9.0/5.0)*a) + 32;
   printf("The temp. is %f farenheit.", b);
}
