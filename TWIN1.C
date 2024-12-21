#include<stdio.h>
#include<conio.h>
void main(){
	   int no,sum=0,mul=1,temp;
	   clrscr();
	   printf("\nenter the number :-");
	   scanf("%d",&no);
	   for(;no>0;)
	   {
	   temp=no%10;
	   sum=sum+temp;
	   mul=mul*temp;
	   no=no/10;

	   }
	   if(sum==mul)
	   {
	   printf("\nthe number is twin");
	   }
	   else
	   {
	   printf("\nthe number is not twin");
	   }
	   getch();
}