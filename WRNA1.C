#include<stdio.h>
#include<conio.h>
int add();
int sub();
int mult();
int div();
void main(){

	int i,choice;
	while(1){
	clrscr();
	printf("\n1 for add");
	printf("\n2 for sub");
	printf("\n3 for mult");
	printf("\n4 for div");
	printf("\n5 for exit");
	printf("\nenter the choice:-");
	scanf("%d",&choice);
	switch(choice){
		case 1: add();
			break;
		case 2: sub();
			break;
		case 3: mult();
			break;
		case 4: div();
			break;
		case 5:exit(0);
			break;

	}
	getch();
	}
	}
int add()
{
	int a,b,c;
	printf("\nenter the value of a =");
	scanf("%d",&a);
	printf("\nenter the value of b =");
	scanf("%d",&b);
	c=a+b;
	printf("\nenter the answer of c = %d",c);
	return c;
}
int sub()
{
	int a,b,c;
	printf("\nenter the value of a =");
	scanf("%d",&a);
	printf("\nenter the value of b =");
	scanf("%d",&b);
	c=a-b;
	printf("\nenter the answer of c = %d",c);
	return c;
}
int mult()
{
	int a,b,c;
	printf("\nenter the value of a =");
	scanf("%d",&a);
	printf("\nenter the value of b =");
	scanf("%d",&b);
	c=a*b;
	printf("\nenter the answer of c = %d",c);
	return c;
}
int div()
{
	int a,b,c;
	printf("\nenter the value of a =");
	scanf("%d",&a);
	printf("\nenter the value of b =");
	scanf("%d",&b);
	c=a/b;
	printf("\nenter the answer of c = %d",c);
	return c;
}
