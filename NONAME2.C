#include<stdio.h>
#include<conio.h>
void main()
{
 int physics,chemistry,biology,mathematics,computer;
 float per;
 clrscr();
 printf("enter the marks of physics:\n");
 scanf("%d",&physics);
 printf("enter the marks of chemistry:\n");
 scanf("%d",&chemistry);
 printf("enter the marks of mathematics:\n");
 scanf("%d",&mathematics);
 printf("enter the marks of biology:\n");
 scanf("%d",&biology);
 printf("enter the marks of computer:\n");
 scanf("%d",&computer);
 per=(physics+chemistry+mathematics+biology+computer)/5;
 printf("Per:%f%\n",per);

 //conditional statements:
{
  if(per>=90 && per<100)
  printf("Grade:A");
  else if(per>=80 && per<90)
  printf("Grade:B");
  else if(per>=70 && per<80)
  printf("Grade:C");
  else if(per>=60 && per<70)
  printf("Grade:D");
  else if(per>=40 && per<60)
  printf("Grade:E");
  else
  printf("Grade:F");}
  getch();
}