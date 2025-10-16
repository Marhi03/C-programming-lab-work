#include <stdio.h>
int main()
{
    void  recnatural (int);
    recnatural(10);
}
void recnatural (int n)
{
    if (n==0)
        return;
    else
    {
        recnatural(n-1);
        printf("%d\n",n*2-1);
    }
}
