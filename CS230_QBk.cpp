#include <stdio.h>
#include <string.h>
int main()
{
    void length(char*);
    void uppcase(char*);
    void lwrcase(char*);
    void togglecase(char*);
    char a[21], b[21], c[21], d[21];
    printf("Enter a string(Maximum 20 characters):\n");
    gets(a);
    strcpy(b,a);
    strcpy(c,a);
    strcpy(d,a);
    length(b);
    uppcase(c);
    lwrcase(d);
    togglecase(a);
}

void length(char*s)
{
    int l=0, i;
    for(i=0; s[i]!='\0'; i++)
    {
        l++;
    }
    printf("This string is %d characters long.\n", l);
}

void uppcase(char*s)
{
    int i;
    char*p = s;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i] = s[i] - 32;
    }
    printf("String in uppercase: %s\n", p);
}

void lwrcase(char*s)
{
    int i;
    char*p = s;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i] = s[i] + 32;
    }
    printf("String in lowercase: %s\n", p);   // FIX
}

void togglecase(char*s)
{
    int i;
    char*p = s;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i] = s[i] + 32;
        else if(s[i]>='a' && s[i]<='z')
            s[i] = s[i] - 32;
    }
    printf("String in togglecase: %s\n", p);   // FIX
}
