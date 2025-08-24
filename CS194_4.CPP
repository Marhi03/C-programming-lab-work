#include<stdio.h>     //header file
#include<conio.h>
void main()
{ /*Program to divide 2 nos.*/
  int a, b, c;
  clrscr();
  printf(" Enter 2 Nos.");
  scanf("%d %d", &a, &b);    //input
  c = a / b;       //divide 2 nos.
  printf("%d / %d = %d", a,b,c);
  getch();
  }


