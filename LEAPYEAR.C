#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	clrscr();
	printf("\nenter the year:- ");
	scanf("%d",&i);
	if(i%4==0){
	printf("\nthe year is leap year");
	}
	else
	{
	printf("\nthe year is not leap year");
	}
	getch();
	}