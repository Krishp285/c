#include<stdio.h>
#include<conio.h>
void main(){
	int no,temp,rev=0;
	clrscr();
	printf("\nenter the first number ");
	scanf("%d",&no);    //123
	for(;no>0;)
	{
	 temp=no%10;
	 rev= (rev*10) +temp;
	 no=no/10;
	}
	printf("\nthe reverse number is %d",rev);
	getch();
	}
