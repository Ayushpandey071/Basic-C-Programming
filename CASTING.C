#include<stdio.h>
#include<conio.h>
void main()
{
 int age;
 clrscr();
 printf("enter age of the people:");
 scanf("%d",&age);
 { if(age>=18)
  printf("congratulation! You are eligible for casting");
  else if(age<18)
  printf("You are not eligible for casting");
  }
getch();
}