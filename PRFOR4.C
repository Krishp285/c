#include<stdio.h>
#include<conio.h>
void main(){
	int i,num;
	clrscr();
	printf("\nenter the number of table you wnat to print");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
	printf("\n%d x %d = %d",num,i,num*i);
	}
	getch();
	}