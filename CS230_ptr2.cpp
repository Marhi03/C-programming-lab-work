#include <stdio.h>
int main()
{
    int a[4][4], i, j, b[16], t, k=0;
    printf("Enter elements of a 4x4 matrix:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Enter value: ");
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            b[k] = a[i][j];
            k++;
        }
    }
    for(i=0; i<16; i++)
    {
        for(j=i+1; j<16; j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0; i<16; i++)
        printf("%d ", b[i]);
}
