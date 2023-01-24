#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,res;
 clrscr();
 //this section for getting inputs from user
 printf("enter first number:\n");
 scanf("%d",&a);
 printf("enter second number:\n");
 scanf("%d",&b);
 //this section is for printing Input
 res=a+b;
 printf("\nAddition=%d",res);
 res=a-b;
 printf("\nsubstraction=%d",res);
 res=a*b;
 printf("\nmultipllication=%f",res);
 res=a/b;
 printf("\ndivision=%d",res);
 getch();
 }
