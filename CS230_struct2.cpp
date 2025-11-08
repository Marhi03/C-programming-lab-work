#include <stdio.h>
#include <stdlib.h>
struct bank
{
    char accno[10];
    char name[10];
    float balance;
};

int main()
{
    int n, i;
    bank b[10];
    printf("Structure to store information of customers is created.\n");
    for(int i=0; i<10; i++)
    {
        printf("Enter the details of customer no. %d\n", i+1);
        printf("Account Number: ");
        gets(b[i].accno);
        printf("Name: ");
        gets(b[i].name);
        printf("Balance: ");
        scanf("%f", &b[i].balance);
        fflush(stdin);
    }
    void print(struct bank);
    printf("Details of accounts having balance less than 100.\n");
    for(int i=0; i<10; i++)
        print(b[i]);
    printf("Which account do you want to access?\n");
    printf("Enter Account Number: ");
    scanf("%d", &n);
    void wd(struct bank*);
    i=n-1;
    {wd(&b[i]);}
}

void print(struct bank b)
{
    if(b.balance<100)
    {
        printf("Account Number: %s\n", b.accno);
        printf("Name          : %s\n", b.name);
    }
}

void wd(struct bank*a)
{
    int b, c;
    printf("Account Number: %s\n", a->accno);
    printf("Name          : %s\n", a->name);
    printf("1 for deposit.\n0 for withdrawal.\n");
    scanf("%d", &b);
    if(b==1)
       {
           printf("Enter amount you want to deposit:");
           scanf("%d", &c);
           printf("\nTransaction successful.\n");
       }
    else
        printf("The balance is insufficient for the specified withdrawal.\n");
}
