#include<stdio.h>
#include<conio.h>
void main(){
	int i,no,temp,sum=0;
	clrscr();
	printf("\nenter the first number ");
	scanf("%d",&no);
	for(;no>0;)
	{
	 temp=no%10;
	 sum=sum+temp;
	 no=no/10;
	}
	printf("\nthe sum is %d",sum);
	getch();
	}