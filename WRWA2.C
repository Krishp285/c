#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a,int b);
void main(){

	int i,choice,a,b;
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
		case 1: printf("\nenter the value of a =");
			scanf("%d",&a);
			printf("\nenter the value of b =");
			scanf("%d",&b);
			add(a,b);
			break;
		case 2: printf("\nenter the value of a =");
			scanf("%d",&a);
			printf("\nenter the value of b =");
			scanf("%d",&b);
			sub(a,b);
			break;
		case 3: printf("\nenter the value of a =");
			scanf("%d",&a);
			printf("\nenter the value of b =");
			scanf("%d",&b);
			mult(a,b);
			break;
		case 4: printf("\nenter the value of a =");
			scanf("%d",&a);
			printf("\nenter the value of b =");
			scanf("%d",&b);
			div(a,b);
			break;
		case 5:exit(0);
			break;

	}
	getch();
	}
	}
int add(a,b)
{
	int c;

	c=a+b;
	printf("\nenter the answer of c = %d",c);
	return c;
}
int sub(a,b)
{
	int c;
	c=a-b;
	printf("\nenter the answer of c = %d",c);
	return c;
}
int mult(a,b)
{
	int c;
	c=a*b;
	printf("\nenter the answer of c = %d",c);
	return c;
}
int div(a,b)
{
	int c;

	c=a/b;
	printf("\nenter the answer of c = %d",c);
	return c;
}
