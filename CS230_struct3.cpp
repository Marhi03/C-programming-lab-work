#include <stdio.h>
#include <stdlib.h>
struct student_data
{
    int rollno;
    char name[10];
    int phy;
    int maths;
    int chem;
};

int main()
{
    int total;
    student_data s1;
    printf("Structure to store student data is already created.\n");
    printf("Enter the details of a student:\n");
    printf("Roll Number       : ");
    scanf("%d", &s1.rollno);
    fflush(stdin);
    printf("Name              : ");
    gets(s1.name);
    printf("Marks in Physics  : ");
    scanf("%d", &s1.phy);
    printf("Marks in Maths    : ");
    scanf("%d", &s1.maths);
    printf("Marks in Chemistry: ");
    scanf("%d", &s1.chem);

    total = (s1.phy) + (s1.maths) + (s1.chem);
    void display(int, struct student_data);
    display(total, s1);
}

void display(int i, struct student_data s)
{
    printf("Displaying information of the student:\n");
    printf("Roll Number       : %d\n", s.rollno);
    printf("Name              : %s\n", s.name);
    printf("Marks in Physics  : %d\n", s.phy);
    printf("Marks in Maths    : %d\n", s.maths);
    printf("Marks in Chemistry: %d\n", s.chem);
    printf("Total marks       : %d\n", i);
}
