#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=0;
    FILE*fpr, *fpw;
    fpr = fpw = NULL;
    char ch;
    if((fpr=fopen("my1stfl.dat","r"))==NULL)
    {
        printf("Sorry, I cannot open a my1stfl.dat file.\n");
        exit(0);
    };
    if((fpw=fopen("my2ndfl.dat","w"))==NULL)
    {
        printf("Sorry, I cannot open a my2ndfl.dat file.\n");
        fclose(fpr);
        exit(0);
    };
    ch=fgetc(fpr);
    while(ch!=EOF)
    {
        printf("%c", ch);
        fputc(ch,fpw);
        ch=fgetc(fpr);
        c++;
    };
    fclose(fpr);
    fclose(fpw);
    printf("\nFile copied successfully.\n");
    printf("File contains %d characters.", c);
}
