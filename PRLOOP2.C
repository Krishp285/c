#include<stdio.h>
#include<conio.h>
void main(){
	int i,no1,no2;
	clrscr();
	printf("\nenter the starting point ");
	scanf("%d",&no1);
	printf("\nenter the ending point ");
	scanf("%d",&no2);
	for(i=no1;i<=no2;i++)
	{
	   printf("\n%d",i);
	   sum=sum+i;
	}
	printf("\nthe sum is %d",sum);
	getch();
	}
