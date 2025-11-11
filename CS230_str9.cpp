#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10], s2[10];
    printf("Enter string 1:\n");
    gets(s1);
    printf("Enter string 2:\n");
    gets(s2);
    strcat(s1, s2);
    printf("After concatenation: %s\n", s1);
}
