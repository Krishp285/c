#include<stdio.h>
#include<conio.h>
struct date
{
	int month;
	int date;

};
void dhar(int m);
void main()
{
	int d,m;
	clrscr();
	printf("Enter a date");
	scanf("%d",&d);
	printf("\nEnter a month");
	scanf("%d",&m);
	dhar( m);




	getch();
}
void dhar(int m)
{
	if(m==1)
	{
		printf("your best month is january");
	}
	else if(m==2)
	{
		printf("yourbest month is february");
	}
	else if(m==3)
	{
		printf("yourbest month is march");
	}
	else if(m==4)
	{
		printf("yourbest month is april");
	}
	else if(m==5)
	{
		printf("yourbest month is may");
	}
	else if(m==6)
	{
		printf("yourbest month is jun");
	}
	else if(m==7)
	{
		printf("yourbest month is july");
	}
	else if(m==8)
	{
		printf("yourbest month is august");
	}
	else if(m==9)
	{
		printf("yourbest month is sapatember");
	}
	else if(m==10)
	{
		printf("yourbest month is october");
	}
	else if(m==11)
	{
		printf("yourbest month is navember");
	}
	else if(m==12)
	{
		printf("your best month is december");
	}
	else
	{
		printf("please today is your not day");
	}













}