#include<stdio.h>
#include<conio.h>
void main()
{
 int m,p,c,t,mp;
 clrscr();
 printf("Eligibility criteria:\n");
 printf("marks in maths>=65:\n");
 printf("marks in phy>=55:\n");
 printf("marks in chem>=50:\n");
 printf("total marks in all three subject>=190:\n");
 printf("marks in maths and phy>=140:\n");
 printf("\n");

 printf("enter the marks in maths:\n");
 scanf("%d",&m);
 printf("enter the marks in phy:\n");
 scanf("%d",&p);
 printf("enter the marks in chem:\n");
 scanf("%d",&c);
 t=m+p+c;
 printf("total marks of math,phy and chemistry:%d\n",t);
 mp=m+p;
 printf("total marks in maths and phy:%d\n",mp);

 {
  if(m>=65 && p>=55 && c>=50 && t>=190 && mp>=140)
  printf("candidate is eligible for admission");
  else
  printf("candidate is not eligible for admission");
  }
getch();
}