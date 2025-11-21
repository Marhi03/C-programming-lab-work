#include <stdio.h>
#include <string.h>

void sortstr(char s[])
{
    int i,j,l=strlen(s);
    char temp;

    for (i=0;i<l-1;i++)
    {
        for (j=i+1;j<l;j++)
        {
            if (s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}

int main()
{
    char str[100],sorted[100];
    char filename[]="25BCP105.txt";

    printf("Enter a string: ");
    fgets(str,100,stdin);
    str[strcspn(str, "\n")] = '\0';
    strcpy(sorted,str);
    strlwr(sorted);
    sortstr(sorted);

    FILE *fp=fopen(filename, "w");
    if (fp==NULL)
        printf("The file cant be accessed.\n");
    else
    {
        fprintf(fp, "Original string: %s\n", str);
        fprintf(fp, "Sorted string: %s\n", sorted);
    }
    fclose(fp);
    printf("File %s is written successfully\n", filename);
    return 0;
}
