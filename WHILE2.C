#include<stdio.h>
#include<conio.h>
void main(){
	int i,no;
	clrscr();
	printf("enter the number = ");
	scanf("%d",&no);
	i=1;
	while(i<=10){
		printf("\n%d * %d = %d",no,i,no*i);
		i++;
		}//end of for loop
		getch();
		}
