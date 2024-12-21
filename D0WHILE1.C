#include<stdio.h>
#include<conio.h>
void main(){
	int i=1,no;
	clrscr();
	printf("enter the number = ");
	scanf("%d",&no);
	do{
		printf("\n%d * %d = %d",no,i,no*i);
		i++;
		}//end of for loop
		while(i<=10);
		getch();
		}