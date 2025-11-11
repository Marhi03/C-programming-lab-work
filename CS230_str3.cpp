#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    printf("Enter a string: ");
    gets(str);
    printf("Uppercase conversion of the given string is %s.\n", strupr(str));
}
