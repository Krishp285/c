#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,sum=0;
	clrscr();
	printf("\nenter the 10 number ");
	for(i=1;i<=10;i++)
	{
		printf("\nenter value of %d",i);
		scanf("%d",&n);
		sum=sum + n;
	}
	printf("\nthe addition is %d",sum);
	printf("\nthe avg is %d",sum/10);
	getch();
	}