#include<stdio.h>
#include<conio.h>
void main(){
	char f,g,h,i,j;
	char *a,*b,*c,*d,*e;
	clrscr();
	printf("\nenter the value of f");
	scanf(" %c",&f);
	a=&f;
	printf("\nthe value is %c and the address is %u",*a,a);
	//%u is address
	printf("\nenter the value of g");
	scanf(" %c",&g);
	b=&g;
	printf("\nthe value is %c and the address is %u",*b,b);
	printf("\nenter the value of h");
	scanf("%c",&h);
	c=&h;
	printf("\nthe value is %c and the address is %u",*c,c);
	printf("\nenter the value of i");
	scanf(" %c",&i);
	d=&i;
	printf("\nthe value is %c and the address is %u",*d,d);
	printf("\nenter the value of j");
	scanf("%c",&j);
	e=&j;
	printf("\nthe value is %c and the address is %u",*e,e);

	getch();
}
