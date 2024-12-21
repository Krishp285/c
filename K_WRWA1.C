#include<stdio.h>
#include<conio.h>
int add();
int main(int c){
	int a,b;
	clrscr();
	printf("\nenter the number a :-");
	scanf("%d",&a);
	printf("\nenter the number b :-");
	scanf("%d",&b);
	c = a + b;
	printf("\nthe ans is %d",c);
	getch();
	}