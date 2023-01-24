//WAP to check the entered character is small,capital, or a special character
#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("enter any letter from keyboard:\n");
 scanf("%c",&ch);
 {
 if(ch=='A'||ch=='B'||ch=='C'||ch=='D')
 printf("Capital letter");
 else if(ch=='a'||ch=='b'|| ch=='c'||ch=='d')
 printf("small letter");
 else
 printf("special character");
 getch();}
}


