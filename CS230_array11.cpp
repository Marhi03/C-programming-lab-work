#include <stdio.h>

int main()
{
    int a[10] = {0}, b[10] = {0};   // initialize all with 0
    int i, n, dir;

    printf("Enter 5 values: ");
    for(i = 3; i < 8; i++)
        scanf("%d", &a[i]);

    printf("\nHow many positions do you want to shift? ");
    scanf("%d", &n);

    printf("Enter 1 for RIGHT shift or 2 for LEFT shift: ");
    scanf("%d", &dir);

    if(dir == 1)        // RIGHT SHIFT
    {
        for(i = 0; i < 10; i++)
        {
            if(i+n < 10)
                b[i+n] = a[i];
        }
    }
    else if(dir == 2)   // LEFT SHIFT
    {
        for(i = 0; i < 10; i++)
        {
            if(i-n >= 0)
                b[i-n] = a[i];
        }
    }
    else
    {
        printf("Invalid choice!");
        return 0;
    }

    printf("\nShifted array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", b[i]);
}
