#include<stdio.h>
#include<conio.h>
void main(){
	int n1,n2,n3;
	clrscr();
	printf("\nenter the first number :-");
	scanf("%d",&n1);
	printf("\nenter the second number :-");
	scanf("%d",&n2);
	n3=n1;
	n1=n2;
	n2=n3;
	printf("\nthe first number is %d",n1);
	printf("\nthe second number is %d",n2);
	getch();
	}