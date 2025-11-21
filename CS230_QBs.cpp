#include <stdio.h>
int main()
{
    char b[3][20], *p[3];
    printf("Enter the name of 3 books.\n");
    int i, j;
    for(i=0; i<3; i++)
    {
        printf("Book %d: ", i+1);
        gets(b[i]);
        for(j=0; b[i][j]!='\0'; j++)
        {
            if(b[i][j]=='\n')
                b[i][j]=='\0';
        }
        p[i]=b[i];
    }
    printf("\nName of the books are:\n");
    for(i=0; i<3; i++)
        printf("%s\n", p[i]);
}
