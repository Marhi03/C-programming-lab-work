#include<stdio.h>     //header file
#include<conio.h>
void main()       //function
{ /*Program to subtract 2 nos.*/
  int a, b, c;
  clrscr();
  printf("Enter 2 Nos.");
  scanf("%d %d", &a, &b);     //input
  c = a - b;    //subtract 2 nos.
  printf("%d - %d = %d\n", a,b,c);
  getch();
  }