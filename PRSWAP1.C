#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	clrscr();
	printf("\nenter the value of a :-");
	scanf("%d",&a);
	printf("\nenter the value of b :-");
	scanf("%d",&b);
	a==b;
	b==a;
	printf("\n the value of a after swap will be %d",b);
	printf("\n the value of b after swap will be %d",a);
	getch();
	}