#include <stdio.h>
# include <string.h>
int main()
{
    int i, j, a, b;
    char str[20], sorted[20], ch;
    printf("Enter a string: ");
    fgets(str,20,stdin);
    strcpy(sorted,str);
    void sortstr(char*);
    sortstr(sorted);
    a=strlen(str);
    b=strlen(sorted);

    FILE*fp;
    fp=fopen("25BCP230.txt","w");
    if(fp==NULL)
       {printf("\nThis file cannot be accessed.\n");}
    else
    {
        for(i=0; i<a; i++)
        {
            ch=str[i];
            fputc(ch,fp);
        }
        for(i=0; i<b; i++)
        {
            ch=sorted[i];
            fputc(ch,fp);
        }
    }
        fclose(fp);
        printf("Original string: %s\n", str);
        printf("Sorted string: %s\n", sorted);
        printf("Both the strings have been successfully saved in the file 25BCP230.txt.\n");
}

void sortstr(char*s)
{
    int i, j, l;
    char temp;
    l=strlen(s);
    for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if(s[i]>='a' || s[i]<='z')
            {
                if(s[i]>s[j])
                {
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
            else
            {
                if(s[i]>='A' || s[i]<='Z')
                {
                    if(s[i]>s[j])
                    {
                        temp=s[i];
                        s[i]=s[j];
                        s[j]=temp;
                    }
                }
            }
        }
    }
    strrev(s);
}
