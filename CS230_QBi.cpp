#include <stdio.h>
int main()
{
    void evenprint(int*);
    int a[5];
    printf("Enter 5 values: ");
    for(int i=0; i<5; i++)
        scanf("%d", &a[i]);
    evenprint(&a[0]);
}

void evenprint(int*x)
{
    for(int i=0; i<5; i++)
    {
        if(*x%2==0)
            printf("\n%d", *x);
        x++;
    }
}
