#include<stdio.h>
#include<conio.h>
void main(){
	int rows,p,q,i,j;
	clrscr();
	printf("\nenter the number of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++);
	{
	if(i%2==0)
	{
	p=1;
	q=0;
	}
	else
	{
	p=0;
	q=1;
	}
	for(j=1;j<=i;j++)
	{
	if(j%2==0){
	printf("%d",p);
	}
	else
	{
	printf("%d",q);
	}
	}
	printf("\n");
	}
	getch();
	}