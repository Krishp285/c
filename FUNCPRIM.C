#include<stdio.h>
#include<conio.h>
void prime();
void main(){
	clrscr();
	prime();
	getch();
}
void prime()
{
	int i,prime,no,flag=0;
	clrscr();
	printf("\nenter the  number :-");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
	if(no%i!=0)
	{
	continue;
	}
	else
	{
	break;
	flag=0;
	}
	}
	if(flag==1)
	{
		printf("\nthe number is prime");
	}
	else
	{
		printf("\nthe number is not prime");
	}
	getch();

}