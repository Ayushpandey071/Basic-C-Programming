#include<stdio.h>
#include<conio.h>
void main()
{
 int age,sex,marital_status;
 char m,f,y,n;
 printf("enter age of the user:\n");
 scanf("%d",age);
 printf("enter sex of the user:\n");
 scanf("%d",&sex);
 printf("enter marital status of the user:\n");
 scanf("%d",&marita_status);

 //section for output
 printf("%c%c",&m,&f);
 printf("%c%c",&y,&n);

 //section for female
 { if(sex=f)
 printf("can only work in urban area");}
 //section for male
 {if(sex=m)
  if((age>=20)&&(age<40))
 printf("can work anywhere");
 else if((age>=40)&&(age<80))
 print("can work only in urban area");
 else
 printf("ERROR");}
 getch();
}
 getch();
}
