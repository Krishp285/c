#include<stdio.h>
#include<conio.h>
void avg(int a,int b,int c);
void main(){
	int a,b,c;
	clrscr();
	printf("\nenter the value of a :-");
	scanf("%d",&a);
	printf("\nenter the value of b :-");
	scanf("%d",&b);
	printf("\nenter the value of c :-");
	scanf("%d",&c);
	avg(a,b,c);
	getch();
	}
void avg(int a,int b , int c){
	int x;
	x = (a+b+c)/3;
	printf("\nthe avg is %d",x);


}