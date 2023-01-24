#include<stdio.h>
#include<conio.h>
void main()
{
 // X stands for CRED program
 int x;
 clrscr();
 printf("enter a credit score to access CRED program:\n");
 scanf("%d",&x);
// to check the possibility to access CRED programs:
 {
  if(x>=750)
  printf("YES: one can access CRED programs");
  else if(x<750 && x>=0)
  printf("NO: one cannot access CRED programs");
  else
  printf("ERROR");}
 getch();
}
