#include<stdio.h>
#include<conio.h>
void main(){
	int  factorial=1,i,num;
	clrscr();
	printf("\nenter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		factorial=factorial*i;
	}
		printf("\nfactorial of number %d is %d",num,factorial);
	getch();
	}