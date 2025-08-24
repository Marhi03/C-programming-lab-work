#include <stdio.h>
int main()
{
   /*This program calculates the area of a circle.*/
   int a;
   float b;
   printf("Enter the radius of the circle.\n");
   scanf("%d", &a);
   b = ((22.0/7.0)*a)*a;
   printf("The area of the circle is %f.", b);
}
