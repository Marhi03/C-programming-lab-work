#include <stdio.h>
#include <string.h>
int main()
{
    char s[10];
    int j, a, e, i, o, u;
    a=0; e=0; i=0; o=0; u=0;
    printf("Enter a string:\n");
    gets(s);
    for(j=0; s[j]!='\0'; j++)
    {
        switch(s[j])
        {
          case 'a':
            case 'A': a++;
            break;
          case 'e':
            case 'E': e++;
            break;
          case 'i':
            case 'I': i++;
            break;
          case 'o':
            case 'O': o++;
            break;
          case 'u':
            case 'U': u++;
            break;
        }
    }
    printf("Frequency of each vowel:\n");
    printf("A/a : %d\n", a);
    printf("E/e : %d\n", e);
    printf("I/i : %d\n", i);
    printf("O/o : %d\n", o);
    printf("U/u : %d\n", u);
}
