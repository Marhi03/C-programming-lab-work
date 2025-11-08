#include <stdio.h>
int main()
{
    int i, a[50], F, M, U;
    F=0; M=0; U=0;
    printf("Sex code for unknown:0\n");
    printf("Sex code for male:1\n");
    printf("Sex code for female:2\n");
    printf("Enter sex code for 50 students: \n");
    for(i=0; i<50; i++)
        scanf("%d", &a[i]);
    for(i=0; i<50; i++)
    {
       if(a[i] == 2)
          F++;
       else
       {
           if(a[i] == 1)
            M++;
           else
            U++;
       }
    }
    printf("Total no of boys are %d.\n", M);
    printf("Total no of girls are %d.\n", F);
    printf("Total no of unknown are %d.\n", U);
}
