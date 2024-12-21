#include<stdio.h>
#include<conio.h>
void main(){
	int no,i,temp=0,sum=0;
	clrscr();
	printf("\nenter the number :-");
	scanf("%d",&no);     //123
	for(;no>0;)
	{
	 temp=no%10;
	 if(temp%2!=0)
	 {
	  sum=sum+temp;
	 }
	 no=no/10;
	}
       printf("\nthe sum is %d",sum);
	getch();
	}