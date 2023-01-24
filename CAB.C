#include<stdio.h>
#include<conio.h>
void main()
{
 // here a and b stands for cabs prices:
 int a,b;
 clrscr();
 printf("enter the charges of first cab:\n");
 scanf("%d",&a);
 printf("enter the charges of second cab:\n");
 scanf("%d",&b);
 // to check minimum  charges of cab:
 {
  if(a>b)
  printf("second cab charges minimum amount of money");
  else if(a<b)
  printf("first cab charges minimum amount of money");
  else if(a=b)
  printf("both cab charges same amount of money");
  else
  printf("invalid output");}
 getch();
 }

