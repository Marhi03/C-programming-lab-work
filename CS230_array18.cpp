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
    printf("Original array:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    printf("\nEnter the value you want to delete.\n");
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
    if(found)
    {
        for(i=pos; i<n; i++)
            a[i]=a[i+1];
    }
    else
        printf("Value not found.\n");
    printf("Modified array:");
    for(i=0; i<(n-1); i++)
        printf("%d ", a[i]);
}
