#include<stdio.h>
#include<conio.h>
void main(){
	int i,start,end,sum=0;
	clrscr();
	printf("enter the first number = ");
	scanf("%d",&start);
	printf("enter the last number = ");
	scanf("%d",&end);

	gotoxy(40,5);
	for(i=start;i<=end;i++){
		gotoxy(40,i);
		cprintf("%d",i);
		sum+=i;

		}
		printf("\nsum of natural number between %d and %d is %d",start,end,sum);
		getch();
		}