#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("enter a year:\n");
 scanf("%d",&a);
 { if(a%4==0)
  printf("it is a leap year");
  else
  printf("it is a normal year");}
  getch();
}
