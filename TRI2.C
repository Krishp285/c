#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,n,l;
	clrscr();
	for(k=1;k<=5;k++)
	{
	for(i=1;i<=k;i++)
	{
		printf("*");

	}//end for i;
	printf("\t");
	for(j=1;j<=k;j++){
		printf("*");
	}//end for j;
	 printf("\t");
	 for(n=1;n<=k;n++)
	{
		printf("*");
	}//end of n;

	printf("\n");
	}//end of k;
	getch();
	}