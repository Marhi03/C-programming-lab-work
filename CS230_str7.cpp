#include <stdio.h>
#include <string.h>
int main()
{
    char b[20], a[20];
    printf("Enter a string: \n");
    gets(a);
    strcpy(b, strrev(a));
    printf("Reversed string is %s.\n", b);
}
