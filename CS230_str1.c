#include <stdio.h>
#include <string.h>
int main()
{
  char a[50], b[50];
  printf("Enter a string:\n");
  gets(a);
  printf("Original string: %s.\n", a);
  for(int i = 0; a[i]!=0; i++)
  (a[i]>='A' && a[i]<='Z')?a[i]+=32:
  (a[i]>='a' && a[i]<='z')?a[i]-=32:i;;
  printf("Toggle case: %s\n", a);
  printf("%d is the length of the string.\n", strlen(a));
  strlwr(a);
  printf("Lowercase string is %s\n", a);
  strupr(a);
  printf("Uppercase string is %s\n", a);
  strcpy(b, a);
  printf("Copied...%s\n",b );
  printf("Comparing we get %d.\n", strcmp(a,b));
  strrev(a);
  printf("Reversing the string, we get %s.\n", a);
}
