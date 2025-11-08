#include <stdio.h>
int main()
{
    int n;
    int i, sum;
    float mean;
    sum=0;
    printf("How many values do you want to enter: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d values: \n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
        sum = sum + a[i];
    printf("The sum of these values is %d.\n", sum);
    mean = sum/n;
    printf("The mean of these values is %.2f.\n", mean);
}
