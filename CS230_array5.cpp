#include <stdio.h>
int main()
{
    int rows, cols, i;
    printf("Enter no. of rows: \n");
    scanf("%d", &rows);
    printf("Enter no. of columns: \n");
    scanf("%d", &cols);
    int a[rows][cols], b[rows][cols], sum[rows][cols];

    printf("Enter the elements of 1st matrix: \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix: \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("b[%d][%d] = ", i,j);
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nResultant matrix: \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
