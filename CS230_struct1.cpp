#include <stdio.h>
#include <stdlib.h>

struct studentData
{
    int rollno[10];
    char name[20];
    char courseName[15];
    char majorSub[10];
    char minorSub[10];
};

int main()
{
    int n;
    studentData s[10];
    printf("Structure for storing 10 student's data is already created.\n");
    for(int i=0; i<=9; i++)
    {
        printf("Enter the details of student no. %d.\n", i+1);
        printf("Enter roll no: ");
        scanf("%d", &s[i].rollno);
        printf("\nEnter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("\nEnter course name: ");
        gets(s[i].courseName);
        printf("\nEnter Major Subject: ");
        gets(s[i].majorSub);
        printf("\nEnter Minor Subject: ");
        gets(s[i].minorSub);
    }
    void display(struct studentData*);
    int i=0;
    for(; i<=9; i++)
    {
        display(&s[i]);
    }
    printf("Enter a roll no. :");
    scanf("%d", &n);
    void rdisplay(struct studentData*);
    i=n;
    {
        rdisplay(&s[i]);
    }
}

void display(struct studentData*ps)
{
    printf("Name :  %s\n", ps->name);
}

void rdisplay(struct studentData*rd)
{
    printf("Roll no.       :  %d\n", rd->rollno);
    printf("Name           :  %s\n", rd->name);
    printf("Course Name    :  %s\n", rd->courseName);
    printf("Major Subjects :  %s\n", rd->majorSub);
    printf("Minor Subjects :  %s\n", rd->minorSub);
}
