#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("enter a number:\n");
 scanf("%d",&a);
 {
  if (a>=0)
  printf("positive number");
  else if(a<0)
  printf("negative number");
  }
getch();
}
