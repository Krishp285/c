#include<stdio.h>
#include<conio.h>
#define SIZE 1
void main(){
	int i,j;
	char ch[30];
	clrscr();
	printf("\nenter your name :-");
	scanf("%s",ch);
	printf("\nenter the customer id :-");
	scanf("%d",&i);
	printf("\nenter the unit consumed :-");
	scanf("%d",&j);
	printf("\nthe charge acc.to your unit :-");
	if(j<199)
	{
	printf("\nthe amount is 1.20 per unit");
	}
	if(j>200 && j<400)
	{
	printf("\nthe amount is 1.50 per unit");
	}
	if(j>400 && j<600)
	{
	printf("\nthe amount is 1.80 per unit");
	}
	if(j>600)
	{
	printf("\nthe amount is 2.0 per unit");
	}
	getch();
	}
		}