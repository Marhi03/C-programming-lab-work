#include <stdio.h>
int main()
{
   /*This program converts dollars into Rs.*/
   int a, b;
   printf("How many dollars do you want to convert");
   scanf("%d", &a);
   b = a*48;
   printf("The given dollars value as %d Rs.", b);
}
