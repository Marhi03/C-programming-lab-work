#include <stdio.h>
int main()
{
    void  recnatural (int);
    recnatural(1);
}
void recnatural (int n)
{
    if (n==11)
        return;
    else
    {
        recnatural(n+1);
        printf("%d\n",n);
    }
}
