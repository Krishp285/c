#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 3
void main(){
	int a[ROW][COL];
	int i,j,k,no,flag=1;
	clrscr();
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	printf("\nenter the number a[%d][%d] :-",i,j);
	scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	no=a[i][j];
	flag=1;
	for(k=2;k<no;k++)
	{
	if(no%k==0)
	{
	flag=0;
	break;
	}
	}
	if(flag)
	{
	if(no!=1)
	{
	printf("%d\t",no);
	}
	else
	{
	printf(" \t");
	}
	}
	}
	printf("\n");

	}
	getch();
	}