#include<stdio.h>
#include<conio.h>
void main()
{
 int classes_held,classes_attended,per;
 clrscr();
 printf("classes held");
 scanf("%d",&classes_held);
 printf("classes attended");
 scanf("%d",&classes_attended);
 per=(classes_attended*100)/classes_held;
 printf("%d%",per);
 if(per>75)
 printf("student is allowed to sit in exam");
 else
 printf("student is not allowed to sit in exam");
getch();
}
