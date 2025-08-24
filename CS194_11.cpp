#include <stdio.h>
int main()
{
   /*This program converts grams into kgs.*/
   int a, b;
   printf("How many grams do you want to convert");
   scanf("%d", &a);
   b = a/1000;
   printf("The given grams value as %d kgs.", b);
}
