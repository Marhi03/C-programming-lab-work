#include <stdio.h>
int main()
{
    char s[3][10], *p[3];
    int i, j;
    printf("Enter the names of three books:\n");
    for(i=0; i<3; i++)
    {
        printf("Book %d: ", i+1);
        gets(s[i]);
        for(j=0; s[i][j]!='\0'; j++)
        {
            if(s[i][j] == '\n')
                s[i][j]='\0';
        }
        p[i] = s[i];
    }
    printf("\nName of the books are:\n");
    for(int i=0; i<3; i++)
        printf("%s\n", p[i]);
}
