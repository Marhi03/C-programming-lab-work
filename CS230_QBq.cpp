#include <stdio.h>
#include <stdlib.h>

struct student_data
{
    int rollNo;
    char name[10];
    int phy;
    int maths;
    int chem;
    int total;
};
int main()
{
    FILE*fpw;
    char ch;
    printf("Enter your details:\nRoll no.(only no.)\nName\nBlood group\nCity\n");
    printf("Put # sign when all the details are entered.\n");
    fpw=fopen("record.txt", "w");
    ch=fgetc(stdin);
    while(ch!='#')
    {
        fputc(ch,fpw);
        ch=fgetc(stdin);
    };
    fclose(fpw);
    printf("Your records have been saved in this file.\n");

    struct student_data s;
    printf("Structure to store student data is already created.\n");
    printf("Enter Roll no.          : ");
    scanf("%d", &s.rollNo);
    fflush(stdin);
    printf("Enter Name              : ");
    gets(s.name);
    fflush(stdin);
    printf("Enter marks in Physics  : ");
    scanf("%d", &s.phy);
    printf("Enter marks in Maths    : ");
    scanf("%d", &s.maths);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &s.chem);
    s.total = s.chem + s.phy + s.maths;
    void display(struct student_data);
    display(s);
}

void display(struct student_data s)
{
    printf("Roll No.          : %d\n", s.rollNo);
    printf("Name              : %s\n", s.name);
    printf("Marks in Physics  : %d\n", s.phy);
    printf("Marks in Maths    : %d\n", s.maths);
    printf("Marks in Chemistry: %d\n", s.chem);
    printf("Total marks       : %d\n", s.total);
}
