#include<stdio.h>
#include<conio.h>
void main(){
	int no1,no2,no3;
	clrscr();
	printf("\nenter the first number ");
	scanf("%d",&no1);
	printf("\nenter the second number ");
	scanf("%d",&no2);
	printf("\nenter the third number ");
	scanf("%d",&no3);
	if(no1>no2 && no2>no3)
	{
	printf("\nthe smallest no is %d",no3);
	printf("\nthe middle no is %d",no2);
	printf("\nthe largest no is %d",no1);
	}
	else if(no3>no2 && no2>no1)
	{
	printf("\nthe smallest no is %d",no1);
	printf("\nthe middle no is %d",no2);
	printf("\nthe largest no is %d",no3);
	}
	else if(no3>no1 && no1>no2)
	{
	printf("\nthe smallest no is %d",no2);
	printf("\nthe middle no is %d",no1);
	printf("\nthe largest no is %d",no3);
	}
	else if(no2>no1 && no1>no3)
	{
	printf("\nthe smallest no is %d",no3);
	printf("\nthe middle no is %d",no1);
	printf("\nthe largest no is %d",no2);
	}
	else if(no2>no3 && no3>no1)
	{
	printf("\nthe smallest no is %d",no1);
	printf("\nthe middle no is %d",no3);
	printf("\nthe largest no is %d",no2);
	}
	else if(no1>no3 && no3>no2)
	{
	printf("\nthe smallest no is %d",no2);
	printf("\nthe middle no is %d",no3);
	printf("\nthe largest no is %d",no1);
	}
	else if(no1==no2 && no2<no3)
	{
	printf("\nthe smallest no is - %d",no1);
	printf("\nthe middle no is -");
	printf("\nthe largest no is %d",no3);
	}
	else if(no2==no3 && no2>no1)
	{
	printf("\nthe smallest no is -");
	printf("\nthe middle no is -");
	printf("\nthe largest no is %d",no2);
	}
	else if(no2==no3 && no2<no1)
	{
	printf("\nthe smallest no is -",no2);
	printf("\nthe middle no is -");
	printf("\nthe largest no is %d",no1);
	}
	else if(no1==no3 && no3<no2)
	{
	printf("\nthe smallest no is -%d",no1);
	printf("\nthe middle no is -");
	printf("\nthe largest no is %d",no2);
	}
	else if(no1==no2 && no3==no2)
	{
	printf("\nthe smallest no is -");
	printf("\nthe middle no is -");
	printf("\nthe largest no is -");
	}
	else if(no2==no3 && no1>no2)
	{
	printf("\nthe smallest no is -%d",no2);
	printf("\nthe middle no is -");
	printf("\nthe largest no is %d",no1);
	}
	else if(no1==no2 && no2>no3)
	{
	printf("\nthe smallest no is %d",no3);
	printf("\nthe middle no is -");
	printf("\nthe largest no is -%d",no2);
	}
	else if(no2==no3 && no1>no2)
	{
	printf("\nthe smallest no is %d",no2);
	printf("\nthe middle no is -");
	printf("\nthe largest no is -%d",no1);
	}
	else if(no1==no3 && no2<no3)
	{
	printf("\nthe smallest no is %d",no2);
	printf("\nthe middle no is -");
	printf("\nthe largest no is -%d",no3);
	}
	getch();
	}