#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 3
void main(){
	int a[ROW][COL];
	int i,j;
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
	if(i==j)
	{
	printf("%d",a[i][j]);
	}
	else
	{
	printf("\t");
	}
	}
	printf("\n");
	}
	getch();
	}