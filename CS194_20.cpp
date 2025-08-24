#include <stdio.h>
int main()
{
   /*This program calculates the area of a triangle.*/
   int a, b;
   float c;
   printf("Enter the height and altitude of the triangle.\n");
   scanf("%d%d", &a, &b);
   c = (a*b)/2;
   printf("The area of the triangle is %f.", c);
}
