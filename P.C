#include<stdio.h>
#include<conio.h>
void main(){
	int a[5],i,no;
	clrscr();
	for(i=0;i<5;i++)
	{
	printf("\nenter a[%d] :-",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("%d",a[i]);
	}
	printf("\nenter no :-");
	scanf("%d",&no);
	for(i=0;i<5;i++)
	{
		if(no>=6)
		{
		printf("\nyui");
		}
		else
		for(i=no-1;i<4;i++)
		{
		a[i] = a[i+1] ;
		}
	}
	for(i=0;i<4;i++)
	{
	printf("\na[%d] is ",i);
	printf("%d",a[i]);
	}
	getch();
	}