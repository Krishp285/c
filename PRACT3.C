#include<stdio.h>
#include<conio.h>
void main(){
	int n1,n2,n3;
	clrscr();
	printf("\nenter the first number :-");
	scanf("%d",&n1);
	printf("\nenter the second number :-");
	scanf("%d",&n2);
	printf("\nenter the third number :-");
	scanf("%d",&n3);
	if(n1>n3){
	if(n3>n2){
	printf("\nthe largest number is %d",n1);
	}
	}
	if(n2>n3){
	if(n2>n1){
	printf("\nthe largest number is %d",n2);
	}
	}
	if(n3>n1){
	if(n3>n2){
	printf("\nthe largest number is %d",n3);
	}
	}
	getch();
	}