#include <stdio.h>
int main()
{
   /*This program calculates the perimeter and area of a rectangle.*/
   int a, b;
   float c, d;
   printf("Enter the length and breadth of the rectangle.\n");
   scanf("%d%d", &a, &b);
   c = a*b;
   d = 2.0*(a+b);
   printf("Area of the rectangle is %f.\n", c);
   printf("Perimeter of the rectangle is %f.\n", d);
}
