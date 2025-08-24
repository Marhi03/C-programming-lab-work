#include <stdio.h>
int main()
{
   /*This program calculates area and perimeter of a square.*/
   int a;
   float b, c;
   printf("Enter the length of side of square.\n");
   scanf("%d", &a);
   b = a*a;
   c = 4.0*a;
   printf("The area of square equals to %f.\n", b);
   printf("The perimeter of the square equals %f.\n", c);
}
