#include <stdio.h>
int main()
{
    int i, x[5];
    printf("Enter 5 values: ");
    for(i=0; i<5; i++)
        scanf("%d", &x[i]);
    for(i=0; i<5; i++)
        printf("%d ", x[i]);
}
