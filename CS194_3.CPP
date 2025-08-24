#include<stdio.h>     //header file
#include<conio.h>
void main();
{ /*Program to multiply 2 nos.*/
  int a, b, c;
  clrscr();
  printf("Enter 2 Nos.");
  scanf("%d %d", &a, &b);    //input
  c = a * b;  // multiply 2 nos.
  printf("%d * %d = %d\n", a,b,c)
  getch();
  }