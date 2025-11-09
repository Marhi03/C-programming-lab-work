#include <stdio.h>
int main()
{
    int r1, r2, c1, c2, i, j;
    printf("Enter the no. of rows of 1st matrix: \n");
    scanf("%d", &r1);
    printf("Enter the no. of columns of 1st matrix: \n");
    scanf("%d", &c1);
    printf("Enter the no. of rows of 2nd matrix: \n");
    scanf("%d", &r2);
    printf("Enter the no. of columns of 2nd matrix: \n");
    scanf("%d", &c2);

    int a[r1][c1], b[r2][c2], c[r1][c2];
    if(c1 != r2)
        printf("Multiplication is not possible.\n");
    else
    {printf("Enter the elements of 1st matrix: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix: \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("b[%d][%d] = ", i,j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            c[i][j] = 0;
            for(int k=0; k<r2; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("\n Resultant matrix: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    }
}
