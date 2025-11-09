#include <stdio.h>
int main()
{
    int a[4][4], i, j, transpose[4][4];
    printf("Enter the elements of 1st matrix:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    printf("Original matrix:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}
