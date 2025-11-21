#include <stdio.h>
int main()
{
    int c=0;
    char a[21], b[21];
    printf("Enter first string to compare (Maximum 20 characters):\n");
    gets(a);
    printf("Enter second string to compare (Maximum 20 characters):\n");
    gets(b);
    for(int i=0; a[i]!='\0' || b[i]!='\0'; i++)
    {
        if(a[i]!=b[i])
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {printf("Both strings are same.\n");}
    else
        printf("Both the strings are different.\n");
}
