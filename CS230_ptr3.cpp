#include <stdio.h>
int main()
{
    int a[3][3], i, j, l, s, b[9], k=0, t;
    printf("Enter values of 3x3 matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf ("Enter value: ");
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            b[k] = a[i][j];
            k++;
        }
    }
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<9; j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    printf("The largest number is: %d\n", *(b+8));
    printf("The smallest number is: %d", *(b));
}
