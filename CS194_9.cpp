#include <stdio.h>
int main()
{
   /*This program converts Rs into dollars.*/
   int a, b;
   printf("How many Rs do you want to convert");
   scanf("%d", &a);
   b = a/48;
   printf("The given Rs value as %d dollars.", b);
}
