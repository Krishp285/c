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
	if(i==0 && j==2)
	{
	printf("%d",a[i][j]);
	}
	if(i==1 && j==1)
	{
	printf("%d",a[i][j]);
	}
	if(i==2 && j==0)
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