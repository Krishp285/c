#include<stdio.h>
#include<conio.h>
void main(){
	int name,id,unit,bill;
	clrscr();
	printf("\nenter the customer id");
	scanf("%d",&id);
	printf("\nenter the customer name");
	scanf(" %c",&name);
	printf("\nenter the units");
	scanf("%d",&unit);
	if(unit<200)
	{
		bill=unit*1;
		printf("\nthe total bill is ",bill);
	}
	if(unit>=200 && unit<400)
	{
		bill=(199*1)+((unit-199)*2);
		printf("\nthe total bill is ",bill);
	}
	if(unit>=400 && unit<600)
	{
		bill=(199*1)+(199*2)+((unit-399)*3);
		printf("\nthe total bill is ",bill);
	}
	else
	{
			bill=(199*1)+(199*2)+(199*3)+((unit-599)*4);
	}
	getch();
	}