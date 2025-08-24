#include <stdio.h>
int main()
{
   /*This program converts bytes into KB, MB and GB.*/
   int a, b, c, d;
   printf("Enter the value of bytes.");
   scanf("%d", &a);
   b = a/1000;
   c = a/1000000;
   d = a/1000000000;
   printf("These bytes value as %d KB.\n", b);
   printf("These bytes value as %d MB.\n", c);
   printf("These bytes value as %d GB.\n", d);
}
