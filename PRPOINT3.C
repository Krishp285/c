#include<stdio.h>
#include<conio.h>
void main(){
	int no1,no2,*ptr1,*ptr2;
	clrscr();
	printf("\nenter the number 1 :-");
	scanf("%d",&no1);
	printf("\nenter the number 2 :-");
	scanf("%d",&no2);
	printf("\nthe number before swap is ");
	*ptr1=no1;
	*ptr2=no2;
	printf("\nno1 is %d",*ptr1);
	printf("\nno2 is %d",*ptr2);
	printf("\nthe number after swap is ");
	*ptr1=no2;
	*ptr2=no1;
	printf("\nno1 is %d",*ptr1);
	printf("\nno2 is %d",*ptr2);
	getch();
	}