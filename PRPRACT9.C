#include<stdio.h>
#include<conio.h>
void main(){
		int i,num,sum=0;
		clrscr();
		printf("\nenter the number");
		scanf("%d",&num);
		for(i=1;i<num;i++){
			if(num%i==0)
			{
			 sum=sum+i;

			}
		}
		if(sum==num)
		{
		 printf("\nthe number is perfect number");
		}
		else
		{
		 printf("\nthe number is not perfect number");
		}
		getch();
	   }