#include <stdio.h>
int main()
{
    int  fac(int);
    fac(5);
}
int fac(int n)
{
    if(n==0)
        return  1;
    else
        return(n * fac(n-1));
}
