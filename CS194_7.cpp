#include <stdio.h>
int main()
{
   /*This program converts mins into hours.*/
   int a, b;
   printf("How many mins do you want to convert");
   scanf("%d", &a);
   b = a/60;
   printf("The given mins convert to %d hours.", b);
}
