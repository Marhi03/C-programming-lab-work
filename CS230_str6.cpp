#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[20], b[20];
    printf("Enter a string: ");
    gets(a);
    printf("Enter a string: ");
    gets(b);
    i = strcmp(b,a);
    if(i=0)
        printf("Both are equal.\n");
    else
    {
        if(strlen(a)>strlen(b))
            printf("%s is greater than %s.\n", a, b);
        else
            printf("%s is greater than %s.\n", b, a);
    }
}
