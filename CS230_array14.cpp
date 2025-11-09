#include <stdio.h>
int main()
{
    int a[6], i, n;
    printf("Enter 5 values: ");
    for(i=0; i<5; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the no. to be inserted.\n");
    scanf("%d", &n);
    a[5]=n;
    printf("Modified array:\n");
    for(i=0; i<6; i++)
        printf("%d ", a[i]);
}
