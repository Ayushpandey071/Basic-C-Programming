#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,res;
 clrscr();
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 res=a+b;
 printf("%d",&res);
 if(res%2==0);
 printf("even number");
 else
 printf("odd number");
 getch();
}
