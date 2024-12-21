#include<stdio.h>
#include<conio.h>
void main(){
	int n1,n2,n3,n4;
	clrscr();
	printf("\nenter the first number of x axis :-");
	scanf("%d",&n1);
	printf("\nenter the second number  y axis:-");
	scanf("%d",&n2);
	if(n1>0 && n2>0)
	{
	printf("\nthe point lies in first quadrant");
	}
	if(n1<0 && n2<0)
	{
	printf("\nthe point lies in third quadrant");
	}
	if(n1>0 && n2<0)
	{
	printf("\nthe point lies in fourth  quadrant");
	}
	if(n1<0 && n2>0)
	{
	printf("\nthe point lies in second  quadrant");
	}
	if(n1==0 && n2==0)
	{
	printf("\nthe point passes through origin");
	}
	getch();
	}