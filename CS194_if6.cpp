#include <stdio.h>
int main()
{
   /*This program is to find net sales.*/
   int a, b, c;
   printf("Enter gross sales.\n");
   scanf("%d", &a);
   if(a>20000)
    { b = (15*a)/100;
      c = a - b;
      printf("%d is the net sales.", c);
    }
   else
   if(a>10000)
    { b = (10*a)/100;
      c = a - b;
      printf("%d is the net sales.", c);
    }
   else
    { b = (5*a)/100;
     c = a - b;
     printf("%d is the net sales.", c);
    }
}
