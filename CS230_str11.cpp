#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[11];
    printf("Enter a string (Maximum 10 characters long):\n");
    gets(a);
    strrev(a);
    printf("Reversed string is:\n");
    for(i=0; i<11; i++)
        printf("%c\n", a[i]);
}
