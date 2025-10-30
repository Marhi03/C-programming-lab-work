#include <stdio.h>
void update(int* max, int* min)
{
    int newMax, newMin;
    printf("Enter the value to be changed for maximum value:\n");
    scanf("%d", &newMax);
    printf("Enter the value to be changed for minimum value:\n");
    scanf("%d", &newMin);
    *max = newMax;
    *min = newMin;
}

int main()
{
    int a[5], max, min;
    printf("Enter 5 numbers:\n");
    for(int i=0; i<5; i++)
        scanf("%d", &a[i]);
    max = min = a[0];
    for(int i=0; i<5; i++)
    {
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    printf("Original maximum value: %d\n", max);
    printf("Original minimum value: %d\n", min);
    update(&max, &min);
    printf("Value of maximum after update: %d\n", max);
    printf("Value of minimum after update: %d\n", min);
}
