#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k=2;
	clrscr();
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{
	if(k%2==0)
	{
	printf("%d ",k);
	k=k+2;
	}

	}
	printf("\n");
	}
	getch();
	}