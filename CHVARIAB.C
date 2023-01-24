#include<stdio.h>
#include"conio.h"
void main()
{
	int age,rollNo;
	float per;
	clrscr();
	//This Section is for Getting Inputs from User
	printf("Enter your details :-\n");
	printf("Age : ");
	scanf("%d",&age);
	printf("\nRoll NO : ");
	scanf("%d",&rollNo);
	printf("\nPercentage : ");
	scanf("%f",&per);
	//This Section is for Printing Inputs
	printf("\nShowing your Details");
	printf("\nAge : %d",age);
	printf("\nRoll No : %d",rollNo);
	printf("\nPercentage : %f",per);
	getch();
}