#include <stdio.h>
int main()
{
   /*This program converts kgs into grams.*/
   int a, b;
   printf("How many kgs do you want to convert");
   scanf("%d", &a);
   b = a*1000;
   printf("The given kgs value as %d grams.", b);
}
