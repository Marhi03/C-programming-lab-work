#include <stdio.h>
#include <stdlib.h>
struct studentData
{
    int rollno;
    char name[20];
    char courseName[20];
    char majorSub[20];
    char minorSub[20];
};

int main()
{
    int n, i;
    studentData s[10];
    printf("Structure to store student data is already created.\n");
    for(int i=0; i<10; i++)
    {
        printf("Enter the details of student no. %d:\n", i+1);
        printf("Enter name         :");
        gets(s[i].name);
        fflush(stdin);
        printf("Enter roll no.     :");
        scanf("%d", &s[i].rollno);
        fflush(stdin);
        printf("Enter Course Name  :");
        gets(s[i].courseName);
        printf("Enter Major Subject:");
        gets(s[i].majorSub);
        printf("Enter Minor Subject:");
        gets(s[i].minorSub);
    }
    void display(struct studentData*);
    for(int i=0; i<10; i++)
    {
        display(&s[i]);
    }
    printf("Enter a Rollno. to see its details.\n");
    scanf("%d", &n);
    void rdisplay(struct studentData*);
    i=n-1;
    rdisplay(&s[i]);
}

void display(struct studentData*n)
{
    printf("Name: %s\n", n->name);
}

void rdisplay(studentData*r)
{
    printf("Name          : %s\n", r->name);
    printf("Roll no.      : %d\n", r->rollno);
    printf("Course Name   : %s\n", r->courseName);
    printf("Major Subjects: %s\n", r->majorSub);
    printf("Minor Subjects: %s\n", r->minorSub);
}
