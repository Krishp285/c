#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mult();
void div();
void main()
{       int choice;
	while(1){
	clrscr();
	printf("\n1 for add");
	printf("\n2 for sub");
	printf("\n3 for mult");
	printf("\n4 for div");
	printf("\n5 for exit");
	printf("\nenter the choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:add();
			break;
		case 2:sub();
			break;
		case 3:mult();
			break;
		case 4:div();
			break;
		case 5:exit(0);
			break;
	}
	getch();
}

}
void add()
{
	int a,b,c;
	printf("\nenter the value of two number");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\n the ans is %d",c);
}
void sub()
{
	int a,b,c;
	printf("\nenter the value of two number");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("\n the ans is %d",c);
}
void mult()
{
	int a,b,c;
	printf("\nenter the value of two number");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("\n the ans is %d",c);
}
void div()
{
	int a,b,c;
	printf("\nenter the value of two number");
	scanf("%d%d",&a,&b);
	c=a/b;
	printf("\n the ans is %d",c);
}