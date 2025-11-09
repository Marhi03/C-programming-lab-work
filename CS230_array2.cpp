#include <stdio.h>
int main()
{
    int i, x[10];
    printf("Enter 10 values: ");
    for(i=0; i<10; i++)
        scanf("%d", &x[i]);
    printf("%d\n", x[3]);
    printf("%d\n", x[6]);
    printf("%d\n", x[8]);
}
