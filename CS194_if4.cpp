#include <stdio.h>
int main()
{
   /*This program is to declare the result of a student*/
   int a, b, c, d;
   printf("Enter the marks in Chemistry, Physics and Maths(Each from 100).\n");
   scanf("%d%d%d", &a, &b, &c);
   d = (a + b + c)/3;
   if(a<35 || b<35 || c<35)
      {
          printf("You are fail.");
      }
   else
   if(d>=70)
      {
         printf("Distinction");
      }
   else
   if(d>=60)
      {
            printf("First class");
      }
   else
   if(d>=50)
      {
         printf("Second class");
      }
   else
   if(d>=35)
      {
           printf("Third class");
      }
   else
      {
          printf("You are fail.");
      }
}
