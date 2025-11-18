#include <stdio.h>
int main()
{
    int i, j, r, c;
    printf("How many rows do you want:\n");
    scanf("%d", &r);
    printf("How many columns do you want:\n");
    scanf("%d", &c);
    int a[r][c], b[r][c], sum[r][c], diff[r][c], mul[r][c];
    printf("Enter the elements of 1st matrix.\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter value: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix.\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter value: ");
            scanf("%d", &b[i][j]);
        }
    }

        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                sum[i][j] = a[i][j] + b[i][j];
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                diff[i][j] = a[i][j] - b[i][j];
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                {
                    mul[i][j] = 0;
                    for(int k=0; k<c; k++)
                        mul[i][j] += a[i][k] * b[k][j];
                }
        }
        printf("Addition of two matrix is:\n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
        printf("Subtraction of two matrix is:\n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d ", diff[i][j]);
            }
            printf("\n");
        }
        printf("Multiplication of two matrix is:\n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
}
