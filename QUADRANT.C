#include<stdio.h>
#include<conio.h>
void main()
{
 int X,Y;
 clrscr();
 printf("value of X:\n");
 scanf("%d",&X);
 printf("value of Y:\n");
 scanf("%d",&Y);
 {
  if(X>0 && Y>0)
  printf("(%d,%d) lies in first quadrant\n",X,Y);
  else if(X<0 && Y>0)
  printf("(%d,%d) lies in second quadrant\n",X,Y);
  else if(X<0 && Y<0)
  printf("(%d,%d) lies in third quadrant\n",X,Y);
  else if(X>0 && Y<0)
  printf("(%d,%d) lies fourth quadrant\n",X,Y);
  }
getch();
}