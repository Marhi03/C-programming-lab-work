#include <stdio.h>
int main()
{
    int n, i, j;
    printf("How many names do you want to store?\n");
    scanf("%d", &n);
    char s[n][10], abb[n][1];
    printf("Enter the names:\n");
    for(i=0; i<n; i++)
    {
        printf("Name %d: ", i+1);
        gets(s[i]);
    }
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<1; j++)
        {
            abb[j][1] = s[i][0];
        }
    }
    printf("Abbreviations are(except last name):\n");
    for(i=0; i<(n-1); i++)
        printf("%s/n", abb[i]);
}
