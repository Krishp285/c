#include<stdio.h>
#include<conio.h>
void main(){
	int i,no;
	clrscr();
	printf("enter the number = ");
	scanf("%d",&no);
	for(i=1;i<=10;i++){
		textbackground(WHITE);
		textcolor(BLUE);
		printf("\n%d * %d = %d",no,i,no*i);
		}//end of for loop
		getch();
		}
