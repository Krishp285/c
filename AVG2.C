#include<stdio.h>
#include<conio.h>
void main(){
	int i,no1,no2,even=0,odd=0;
	clrscr();
	printf("\nenter the starting number");
	scanf("%d",&no1);
	printf("\nenter the ending number ");
	scanf("%d",&no2);
	for(i=no1;i<=no2;i++)
	{

	if(i%2==0){
	      even=even+i;
	}
	else{
	      odd=odd+i;
	}
	}

	     printf("\nthe sumof even no is %d ",even);
		printf("\nthe sumof odd no is %d ",odd);
	getch();
	}