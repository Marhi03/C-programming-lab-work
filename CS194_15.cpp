#include <stdio.h>
int main()
{
   /*This program converts farenheit to celsius.*/
   int a;
   float b;
   printf("Enter the value of temp. in farenheit.");
   scanf("%d", &a);
   b = ((5.0/9.0)*(a-32));
   printf("The temp. is %f celsius.", b);
}
