#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 3
void main(){
	int a[ROW][COL],b[ROW][COL],c[ROW][COL];
	int i,j,k;
	clrscr();
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	printf("\nenter the value of a[%d][%d]",i,j);
	scanf("%d",&a[ROW][COL]);
	}
	}
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	printf("\nenter the value of b[%d][%d]",i,j);
	scanf("%d",&b[ROW][COL]);
	}
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	for(k=0;k<3;k++)
	{
	c[i][j]=c[i][j]+(a[i][k]*b[k][j]);

	}
	}
	}
	printf("\nthe matrix multiplication is\n");
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	printf("%d\t",c[i][j]);
	}
	printf("\n");
	}
	getch();
	}