#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	clrscr();
	for(i=1;i<=5;i++){
	printf("\n%d",i);
	}
	printf("\nthe outer value is %d",i);
	for(i=5;i>=1;i--){
	printf("\n%d",i);
	}
	printf("\nthe outer value is %d",i);
	getch();
	}