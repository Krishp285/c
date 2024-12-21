#include<stdio.h>
#include<conio.h>
void fact();
void main() {
	clrscr();
	fact();
	getch();
}
void fact(){
	int  i,num,fact=1;
	printf("\nenter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++){

		 fact=fact*i;

		}
printf("\nthe answer of the factorial %d is %d",num,fact);
}