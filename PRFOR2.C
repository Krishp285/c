#include<stdio.h>
#include<conio.h>
void main(){
	int i,sum=0;
	clrscr();
	for(i=1;i<=5;i++){
	printf("\n%d",i);
	sum=sum+i;
	}
	printf("\nthe sum is %d",sum);
	getch();
	}