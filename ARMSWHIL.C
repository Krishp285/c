#include<stdio.h>
#include<conio.h>
void main(){
	int no,dup=0,i,temp=0,dc=0,d,sum=0;
	clrscr();
	printf("\nenter the first number ");
	scanf("%d",&no);
	dup=no;
	while(no>0)
	{
	temp=no%10;
	dc++;
	no=no/10;
	}
	printf("\nthe number is of %d digit",dc);
	while(no>0)
	{
	temp=no%10;
		if(dc=1)
		{
		 d=temp;
		}
		else if(dc=2)
		{
		 d=(temp*temp);
		}
		else if(dc=3)
		{
		 d=(temp*temp*temp);
		}
		else if(dc=4)
		{
		 d=(temp*temp*temp*temp);
		}
		else if(dc=5)
		{
		 d=(temp*temp*temp*temp*temp);
		}
		sum=sum+d;

	}
	if(sum==no)
	{
	printf("\nthe number is armstrong %d",dup);
	}
	else
	{
	printf("\nthe number is not  armstrong %d",dup);
	}
	getch();
	}