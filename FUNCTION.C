#include<stdio.h>
#include<conio.h>
void add();//declaration
void main(){
	clrscr();
	add();//calling
	getch(); //hold screen
	}
	void add(){//definition
	int a,b,c,d,e,f,choice;  //variables

	printf("/n1 addition");
	printf("/n2 subtraction");
	printf("/n3 multiplication");
	printf("/n5 division");
	printf("/n6 exit");
	printf("/n enter the choice");
	scanf("%d",&choice);
	switch(choice){//start of choice
	case 1://start of case 1 for addition
	printf("\nenter the value of a");
	scanf("%d",&a);
	printf("\nenter the value of b");
	scanf("%d",&b);
	printf("\nthe answer of a+b  is");
	c=a+b;
	printf("%d",c);

	break;

	case 2://start of case 2 for subtraction
	printf("\nenter the value of a");
	scanf("%d",&a);
	printf("\nenter the value of b");
	scanf("%d",&b);
	printf("\nthe answer of a*b  is");
	b=a*b;
	printf("%d",b);
	break;

	case 3://start of case 3 for multiplication
	printf("\nenter the value of a");
	scanf("%d",&a);
	printf("\nenter the value of b");
	scanf("%d",&b);
	printf("\nthe answer of a*b  is");
	e=a*b;
	printf("%d",e);
	break;
		case 4://start of case 3 for multiplication
	printf("\nenter the value of a");
	scanf("%d",&a);
	printf("\nenter the value of b");
	scanf("%d",&b);


	printf("\nthe answer of a/b  is");
	f=a/b;
	printf("%d",f);
	} //end of switch

	}