#include<stdio.h>
#include<conio.h>
void main(){
	int i,rows,j;
	clrscr();
	printf("\nenter the number of rows ");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
	for(j=1;j<=i;j++){
	 printf("%d",j);
	}
	printf("\n");
	}
	getch();
	}
