#include<stdio.h>
#include<conio.h>
void main(){
	int no,*ptr;
	clrscr();

	no=10;
	printf("\nno is %d",no);//10
	printf("\n&no is %u",&no);//65524

	ptr=&no;

	printf("\nptr(&no) is %u",ptr);
	printf("\n&ptr(&ptr) is %u",&ptr);//65522

	printf("\n*ptr(no value ) is %d",*ptr);//10
	*ptr=200;

	printf("\nupdated *ptr(no value ) is %d",*ptr);
	printf("\nupdated no  is %d",no);
	getch();
	}