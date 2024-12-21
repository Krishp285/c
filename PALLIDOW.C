#include<stdio.h>
#include<conio.h>
void main(){
	int i,no,rev=0,temp=0,dup=0;
	clrscr();
	printf("\nenter the number ");
	scanf("%d",&no);
	dup=no;
	do
	{
	temp=no%10;
	rev=(rev*10)+temp;
	no=no/10;
	}while(no>0);
	if(rev==dup)
	{
	printf("\nthe number is pallindrone %d",dup);
	}
	else
	{
	printf("\nthe number is not pallindrone %d",dup);
	}
	getch();
	}