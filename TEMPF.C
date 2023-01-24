#include<stdio.h>
#include<conio.h>
void main()
{
 float C,F;
 clrscr();
 printf("enter temperature in C:\n");
 scanf("%f",&C);
 F=(C*9/5)+32;
 printf("%f",F);
getch();
}