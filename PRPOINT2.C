#include<stdio.h>
#include<conio.h>
void main(){
	int *ptr,no3,no2,no1;
	clrscr();

	no1=10;
	no2=20;
	no3=30;

	ptr=&no1;
	printf("\nno1 is %d",*ptr);
	ptr++;
	printf("\nno2 is %d",*ptr);
	ptr++;
	printf("\nno2 is %d",*ptr);

	getch();
	}