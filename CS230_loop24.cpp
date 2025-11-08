#include <stdio.h>
int main()
{
    int n, t;
    printf("Enter a no.: \n");
    scanf("%d", &n);
    while(n>0)
    {
        t = n%10;
        printf("%d", t);
        n = n/10;
    }
}
