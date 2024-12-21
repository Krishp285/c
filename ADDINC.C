#include<stdio.h>
#include<conio.h>
void main(){
	int a=2,c;
	clrscr();
	printf("\nvalue befor pre increment=%d ",a++);
	c=a++ + a++ + a++ ;
	printf("\nvalue after pre increment = %d",c);
	getch();
	}