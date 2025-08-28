#include <stdio.h>
int main()
{
  int a;
  printf("Enter a value.\n");
  scanf("%d", &a);
  switch(a)
  {
    case 1 :
    {  int b, c, d;
       printf("Enter 2 values.\n");
            scanf("%d%d", &b, &c);
            d = c + b;
            printf("%d is the sum.", d); break;
    }

    case 2 :
    {  int e, f, g;
       printf("Enter 2 values.\n");
            scanf("%d%d", &e, &f);
            g = e*f;
            printf("%d is the product.", g); break;
    }

    case 3 :
    {  int h;
       printf ("Enter a value.\n");
             scanf("%d" ,&h);
             if(h%2 == 0)
              {printf("The given no. is even");}
            else
              {printf("The given value is odd.");}
              break;
    }

    case 4 :
    {  int i;
       printf("Enter a value\n");
            scanf("%d", &i);
            if(i%5 == 0)
              {printf("The no. is divisible by 5.");}
            else
              {printf("The no. is not divisible by 5.");}
              break;
    }

    case 5 :
    {  int j;
       printf("Enter a value.\n");
       scanf("%d", &j);
       break;
    }

    case 6 :
    {
         printf("Invalid input");
    }

  }
}
