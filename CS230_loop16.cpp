#include <stdio.h>
int main()
{
    int i, a[100], l, s;
    l=0; s=100;
    printf("Enter 100 values: \n");
    for(i=0; i<100; i++)
        scanf("%d", &a[i]);
    for(i=0; i<100; i++)
    {
       if(a[i]>l)
            l = a[i];
    }
    printf("The largest no. is %d.\n", l);
    for(i=0; i<100; i++)
    {
       if(a[i]<s)
            s = a[i];
    }
    printf("The smallest no. is %d.\n", s);
}
