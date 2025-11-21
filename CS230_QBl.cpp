#include <stdio.h>
int main()
{
    void rev(char*);
    char a[21];
    printf("Enter a string (Maximum 20 characters):\n");
    gets(a);
    printf("Original string: %s\n", a);
    rev(a);
}

void rev(char*s)
{
    int l=0;
    char b[21];
    for(int i=0; s[i]!='\0'; i++)
        l++;
    for(int i=0; s[i]!='\0'; i++)
    {
        b[l-i-1] = s[i];
    }
    b[l]='\0';
    printf("Reverse string: %s\n", b);
}
