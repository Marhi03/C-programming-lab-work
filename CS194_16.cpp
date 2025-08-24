#include <stdio.h>
int main()
{
   /*This program calculates interest.*/
   int a, b, c;
   float d;
   printf("Enter the Principle value, Rate of interest and No. of years.\n");
   scanf("%d%d%d", &a, &b, &c);
   d = ((a*b)*c)/100;
   printf("The interest value equals to %f.", d);
}
