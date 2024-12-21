#include<stdio.h>
#include<conio.h>
void pattern();
void main()
{
	clrscr();
	pattern();
	getch();

}
void pattern(){
	int i,j,k=0,row;
	printf("\nenter the number of rows");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
	for(j=1;j<=i;j++)
	{
	k++;
	printf("%d ",k);
	}
	printf("\n");
	}
	}