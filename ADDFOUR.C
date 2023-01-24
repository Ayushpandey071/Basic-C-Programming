#include<stdio.h>
#include<conio.h>
void main()
{
 int classes_held,classes_attended,per,medical_causes;
 char Y,N;
 clrscr();
 printf("enter the number of classes_held:\n");
 scanf("%d",&classes_held);
 printf("enter the number of classes_attended:\n");
 scanf("%d",&classes_attended);
 printf("enter medical_causes");
 scanf("%c%c",&Y,&N);
 per=(classes_attended*100)/classes_held;
 printf("%d\n",per);

// conditional statements:
{
 if((per>=75)||(medical_causes=='Y'))
 printf("user is allowed to sit in exam");
 else
 printf("user is not allowed to sit in  exam");}
 getch();
}



