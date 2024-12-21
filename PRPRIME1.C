#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,primeno=1,flag=1,no;
	clrscr();
	for(i=2;i<=500;i++)
	{
		no=i;
		flag=1;
	for(j=2;j<no;j++)
	{
	if(no%j==0)
	{
	  flag=0;
	  break;
	}
	}
	if(flag==1)
	{
	primeno++;
	printf("%d ",no);
	}
	}
	printf("\ntotal number %d",primeno);
	getch();
	}