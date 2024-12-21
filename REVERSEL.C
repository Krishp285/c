#include<stdio.h>
#include<conio.h>
void main(){
	int i,no1,rem;
	clrscr();
	printf("enter the number :-");
	scanf("%d",&no1);
	while(no1>0)
	{
	       rem=no1%10;
	       printf("%d",rem);
	       no1=no1/10;

	}

		getch();
	}