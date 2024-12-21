#include<stdio.h>
#include<conio.h>
void main(){
	int i,j;
	clrscr();
	printf("\nenter the number of table you want :-");
	scanf("%d",&j);
	for(i=1;i<=10;i++)
	{
	  printf("\n%d x %d = %d",j,i,i*j);
	}
	getch();
		}