#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main(){
	int i,j;
	char a[SIZE],b[SIZE],c[SIZE];
	clrscr();
	for(i=1;i<=SIZE;i++)
	{
		printf("\nenter the number a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=SIZE;i++)
	{
		printf("%d",a[i]);
	}
	for(i=1;i<=SIZE;i++)
	{
		printf("\nenter the number b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=1;i<=SIZE;i++)
	{
		printf("%d",b[i]);
	}
	for(i=1;i<=SIZE;i++)
	{

	  c[i]=a[i]+b[i];
	}
	for(i=1;i<=SIZE;i++)
	{
	 printf("\n%d",c[i]);
	}
	getch();

	}