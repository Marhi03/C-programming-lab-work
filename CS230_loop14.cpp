#include <stdio.h>
int main()
{
    int i, sum, n[10];
    float mean;
    sum=0;
    printf("Enter 10 values: \n");
    for(i=0; i<10; i++)
        scanf("%d", &n[i]);
    for(i=0; i<10; i++)
        sum = sum + n[i];
    printf("The sum of these values is %d.\n", sum);
    mean = sum/10;
    printf("The mean of these values is %.2f.\n", mean);
}
