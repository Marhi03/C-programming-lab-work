#include<stdio.h>
int main()
{
    int i, n, l;
    printf("How many letter long string do you want to enter?\n");
    scanf("%d", &n);
    l=n+1;
    char a[10];
    printf("Enter the string(Maximum 9 characters long):\n");
    fflush(stdin);
    gets(a);
    for(i=0; i<10; i++)
        printf("%c\n", a[i]);
}
