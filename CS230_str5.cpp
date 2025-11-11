#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], b[10];
    printf("Enter a string: ");
    gets(a);
    strcpy(b,a);
    printf("Copied string is %s.\n", b);
}
