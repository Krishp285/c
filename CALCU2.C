#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,choice;\
	while(1){
	clrscr();
	printf("\n1 addition");
	printf("\n2 subtraction");
	printf("\n3 multiplication");
	printf("\n4 division");
	printf("\n5 exit");
	printf("\nenter the choice - ");
	scanf("%d",&choice);
	switch(choice){
		case 1:printf("\nthe first number is =" );
		scanf("%d",&a);
		printf("\nthe second number is =" );
		scanf("%d",&b);
		printf("\nthe answer is =%d",a+b );
		break;
		case 2:printf("\nthe first number is =" );
		scanf("%d",&a);
		printf("\nthe second number is =" );
		scanf("%d",&b);
		printf("\nthe answer is =%d",a-b );
		break;
		case 3:printf("\nthe first number is =" );
		scanf("%d",&a);
		printf("\nthe second number is =" );
		scanf("%d",&b);
		printf("\nthe answer is =%d",a*b );
		break;
		case 4:printf("\nthe first number is =" );
		scanf("%d",&a);
		printf("\nthe second number is =" );
		scanf("%d",&b);
		printf("\nthe answer is =%d",a/b );
		break;
		case 5:exit(0);
		default:("\ninvalid choice");

		}


	getch();
	}
	}