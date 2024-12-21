#include<stdio.h>
#include<conio.h>
void main(){
	int i,t;
	char ch;
	clrscr();
	printf("\nenter the value = ");
	scanf(" %c",&ch);
	if ((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
	{
		printf("\n user enterd character");
		}
	else if(ch >='0' && ch <= '9')
	{
	printf("\nuser entered number");
	}
	else
	{
	printf("\nthe number is special character");
	}
	getch();
	}