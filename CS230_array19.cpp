#include <stdio.h>
int main()
{
    int i, n, pos, value, found;
    found=0;
    printf("How many elements do you want to store?\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter the value you want to search.\n");
    scanf("%d", &value);
    for(i=0; i<n; i++)
    {
        if(a[i]==value)
        {
            pos=i;
            found=1;
            break;
        }
    }
        if(found!=1)
            printf("Value does not exist.\n");
    printf("The given value is %d having position %d.\n", a[pos], pos+1);
}
