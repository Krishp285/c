#include<stdio.h>
#include<conio.h>
#define SIZE 10
void main(){
	int a[SIZE];
	int i,prime,no,j;
	clrscr();

	for(i=0;i<SIZE;i++)
	{
	printf("\nenter the number a[%d] is ",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE;i++)
	{
	printf("%d ",a[i]);
	}

	printf("\nthe fifth prime number are");

	for(j=a[i];;j++)
	{
		if(no%j!=0)
		{
		printf("%d",no);
		}
	}

	getch();
}