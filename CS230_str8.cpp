#include <stdio.h>
#include <string.h>
int main()
{
    char str[10], rev[10];
    int i, length, flag;
    flag=0;
    printf("Enter a string:\n");
    gets(str);
    length = strlen(str);
    for(i=0; i<length; i++)
    {
        rev[i] = str[length-i-1];
    }
    rev[length] = '\0';
    for(i=0; i<length; i++)
    {
        if(str[i]!=rev[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%s is a palindrome string.\n", str);
    else
        printf("%s is not a palindrome string.\n", str);
}
