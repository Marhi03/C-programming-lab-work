#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    printf("Lowercase conversion of the given string is %s\n ", strlwr(str));
}
