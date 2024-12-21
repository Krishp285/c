#include<stdio.h>
#include<conio.h>
void calc();
void main()
{
	clrscr();
	calc();
	getch();
}
void calc(){
	int f,g,*c,*d,*e,*h;
	int *a,*b;
	clrscr();
	printf("\nenter the value of f");
	scanf("%d",&f);
	a=&f;

	printf("\nenter the value of g");
	scanf("%d",&g);
	b=&g;

	c = *a + *b;
	printf("\n%d",c);
	d = *a - *b;
	printf("\n%d",d);
	e = *a * *b;
	printf("\n%d",e);
	h = *a / *b;
	printf("\n%d",h);



	getch();
}
