#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("eneter first number:\n");
 scanf("%d",&a);
 printf("enter second number:\n");
 scanf("%d",&b);
 printf("enter third number:\n");
 scanf("%d",&c);
{
 if(a>b && a>c)
 printf("A is the greatest number");
 else if(b>c && b>a)
 printf("B is the greatest number");
 else if(c>a && c>b)
 printf("C is the greatest niumber");
 else
 printf("invalid output");
 }
getch();
}

