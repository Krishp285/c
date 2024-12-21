#include<stdio.h>
#include<conio.h>
void main(){
	int power,no,k=1,i;
	clrscr();
	printf("\nenter the number :-");
	scanf("%d",&no);  //2
	printf("\nenter the power :-");
	scanf("%d",&power);  //5
	for(i=1;i<=power;i++)
	{
	  k=k*no;

	}
	printf("\nthe ans is %d",k);
	getch();
	}