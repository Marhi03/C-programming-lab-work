#include <stdio.h>
int main()
{
    void xcopy(char*);
    char a[21];
    printf("Enter a string (Maximum 20 characters):\n");
    gets(a);
    printf("Original string: %s\n", a);
    xcopy(a);
}

void xcopy(char*s)
{
    int l=0;
    char b[21];
    for(int i=0; s[i]!='\0'; i++)
        l++;
    for(int i=0; i<=l; i++)
        b[i] = s[i];
    b[l]='\0';
    printf("Copied string: %s\n", b);
}
