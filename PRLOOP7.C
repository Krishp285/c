#include<stdio.h>
#include<conio.h>
void main(){
	int i,num,sum=0,choice;
	clrscr();
	printf("\nenter the number of elements you want to insert ");
	scanf("%d",&choice);
	for(i=1;i<=choice;i++){
	printf("\nenter the number");
	scanf("%d",&num);
	}
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
		printf("\nthe sum of number %d is %d",num,sum);
		printf("\nthe avg is %d",sum/num);
	getch();
	}