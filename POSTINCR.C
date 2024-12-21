#include<stdio.h>
#include<conio.h>
void main(){
	int a=2,c;
	clrscr();
	printf("\nvalue before post increment =%d",a++);
	c=a++ + a++ ;
	printf("\nvalue after post increment = %d ",c);
	getch();
	}