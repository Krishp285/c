#include<stdio.h>
#include<conio.h>
void main(){
	int no1,no2,answer;
	clrscr();
	printf("enter the first number = ");
	scanf("%d",&no1);
	printf("enter the second number = ");
	scanf("%d",&no2);
	printf("\nthe first number is %d",no1);
	printf("\nthe second number is %d",no2);
	answer=no1-no2;
	printf("\nthe subtraction of %d and %d = %d",no1,no2,answer);
	getch();
	}