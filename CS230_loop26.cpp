#include <stdio.h>
int main()
{
    int n, t, sum, og;
    sum = 0;
    printf("Enter a no.: \n");
    scanf("%d", &n);
    og=n;
    while(n>0)
    {
        t = n%10;
        sum = sum + (t*t*t);
        n = n/10;
    }
    if(og == sum)
        printf("%d is an armstrong no.\n", og);
    else
        printf("%d is not an armstrong no.\n", og);
}
