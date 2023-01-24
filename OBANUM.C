#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("enter number:\n");
 scanf("%d",&a);
  if(a%4==0)
 { b=a+1;
  printf("%d",b);}
  else if(a%4>0)
 { b=a-1;
  printf("%d",b);}
  else
  printf("error");
  getch();
}

