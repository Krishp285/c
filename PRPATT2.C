#include<stdio.h>
#include<conio.h>
void main(){
	int i,rows,j;
	clrscr();
	printf("\nenter the number of rows:- ");
	scanf("%d",&rows);
	for(i=5;i>=rows;i--)
	{
	for(j=0;j<=i;j++)
	{
	printf("%d",i);

	}
	printf("\n");
	}
	getch();
	}
