#include <stdio.h>
int main()
{
    int i, n, pos, a[10], p;
    printf("Enter 9 values: ");
    for(i=0; i<9; i++)
        scanf("%d", &a[i]);

    printf("\nEnter the new no. to be inserted.\n");
    scanf("%d", &n);
    printf("Enter the position.\n");
    scanf("%d", &p);
    pos=p-1;

    for(i=9; i>pos; i--)
        a[i]=a[i-1];
    a[pos]=n;

    printf("Array after insertion:\n");
    for(i=0; i<10; i++)
        printf("%d ", a[i]);
}
