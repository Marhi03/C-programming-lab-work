#include <stdio.h>
int main()
{
    int n, t, rev, og;
    rev=0;
    printf("Enter a no.: \n");
    scanf("%d", &n);
    og=n;
    while(n>0)
    {
        t = n%10;
        rev = rev * 10 + t;
        n = n/10;
    }
    if(og == rev)
        printf("The given no. is a palindrome no.\n");
    else
        printf("The given no. is not a palindrome no.\n");
}
