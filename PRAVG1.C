#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c,avg;
	clrscr();
	printf("\nenter the value of a :-");
	scanf("%d",&a);
	printf("\nenter the value of b :-");
	scanf("%d",&b);
	printf("\nenter the value of  c:-");
	scanf("%d",&c);
	avg=(a+b+c)/3;
	printf("\nthe average is %d",avg);
	getch();
	}