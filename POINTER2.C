#include<stdio.h>
#include<conio.h>
void main(){
	float f,g,h,i,j;
	float *a,*b,*c,*d,*e;
	clrscr();
	printf("\nenter the value of f");
	scanf("%f",&f);
	a=&f;
	printf("\nthe value is %f and the address is %u",*a,a);
	//%u is address
	printf("\nenter the value of g");
	scanf("%f",&g);
	b=&g;
	printf("\nthe value is %f and the address is %u",*b,b);
	printf("\nenter the value of h");
	scanf("%f",&h);
	c=&h;
	printf("\nthe value is %f and the address is %u",*c,c);
	printf("\nenter the value of i");
	scanf("%f",&i);
	d=&i;
	printf("\nthe value is %f and the address is %u",*d,d);
	printf("\nenter the value of j");
	scanf("%f",&j);
	e=&j;
	printf("\nthe value is %f and the address is %u",*e,e);

	getch();
}
