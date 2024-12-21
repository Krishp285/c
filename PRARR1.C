#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 3
void main(){
	int a[ROW][COL],b[ROW][COL],c[ROW][COL];
	int i,j,choice;
	clrscr();
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	printf("\nenter the value of a[%d][%d]:- ",i,j);
	scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	printf("\nenter the value of b[%d][%d]:- ",i,j);
	scanf("%d",&b[i][j]);
	}
	}
	printf("\nthe matrix is :-\n");
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	printf("%d",a[i][j]);
	}
	printf("\n");
	}
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	printf("%d",b[i][j]);
	}
	printf("\n");
	}
	while(1){
	clrscr();
	printf("\n1 for addition");
	printf("\n2 for subtraction");
	printf("\n3 for exit");
	printf("\nenter the choice :-");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	c[i][j]=a[i][j] + b[i][j];
	}
	}
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	printf("%d\t",c[i][j]);
	}
	printf("\n");
	}
	break;
	case 2:
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	c[i][j]=a[i][j] - b[i][j];
	}
	}
	for(i=0;i<ROW;i++)
	{
	for(j=0;j<COL;j++)
	{
	printf("%d\t",c[i][j]);
	}
	printf("\n");
	}
	break;
	case 3: exit(0);
		break;
		}
		getch();
		}
	getch();
	}