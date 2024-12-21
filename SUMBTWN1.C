#include<stdio.h>
#include<conio.h>
void main(){
		int i,no,temp=0,sum=0;
		clrscr();
		printf("\nenter the number :-");
		scanf("%d",&no);     //1234/10
		no=no/10;
		do
		{
		temp=(no%10);
		sum=sum+temp;
		no=no/10;
		}while(no>9);
		printf("\nthe sum is %d",sum);
		getch();
}