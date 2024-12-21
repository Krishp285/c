#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,l,d;
	clrscr();
	for(i=1;i<=5;i++)  //rows
	{
	for(j=1;j<=i;j++) //col1
	{
	printf("*");
	}
	printf("\t");
	for(k=1;k<=i;k++)
	{
	printf("*");
	}
	printf("\t");
	for(l=1;l<=i;l++)
	{
	printf("*");
	}
	printf("\t");
	for(d=1;d<=i;d++)
	{
	printf("*");
	}
	printf("\t");
	printf("\n");
	}
	getch();
	}