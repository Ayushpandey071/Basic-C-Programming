#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("enter the height of a person in cm:\n");
 scanf("%d",&a);
 if (a<150)
 printf("The person is dwarf");
 else if(a>=150 && a<165)
 printf("The height of person is average ");
 else if(a>=160 && a<=195)
 printf("The height of person is Tall");
 else
 printf("error");
getch();
}