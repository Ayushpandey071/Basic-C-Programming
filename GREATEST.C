#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,c;
  clrscr();
  printf("enter first number\n");
  scanf("%d",&a);
  printf("enter second number\n");
  scanf("%d",&b);
  printf("enter third number\n");
  scanf("%d",&c);
  {
  if(a>b & a>c)
  printf("a is the greatest number");
  if(b>c & b>a)
  printf("b is the greatest number");
  if (c>a & c>b)
  printf("c is the greatest number");}
  getch();
}

