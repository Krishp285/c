#include<stdio.h>
#include<conio.h>
void main(){
	int f,g,h,i,j;
	int *a,*b,*c,*d,*e;
	clrscr();
	printf("\nenter the value of f");
	scanf("%d",&f);
	a=&f;
	printf("\nthe value is %d and the address is %u",*a,a);
	//%u is address
	printf("\nenter the value of g");
	scanf("%d",&f);
	b=&g;
	printf("\nthe value is %d and the address is %u",*b,b);
	printf("\nenter the value of h");
	scanf("%d",&h);
	c=&h;
	printf("\nthe value is %d and the address is %u",*c,c);
	printf("\nenter the value of i");
	scanf("%d",&i);
	d=&i;
	printf("\nthe value is %d and the address is %u",*d,d);
	printf("\nenter the value of j");
	scanf("%d",&j);
	e=&j;
	printf("\nthe value is %d and the address is %u",*e,e);

	getch();
}
