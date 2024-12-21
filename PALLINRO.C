#include<stdio.h>
#include<conio.h>
void main(){
	   int no,rev=0,temp,n;
	   clrscr();
	   printf("\nenter the number");
	   scanf("%d",&no);
	   n=no;
	   for(;no>0;)
	   {
	    temp=no%10;
	    rev=(rev*10)+temp;
	    no=no/10;

	   }
	   if(rev==n)
	   printf("\nthe number is pallindrome");
	   else
	   {
	   printf("\nthe number is not pallindrome");
	   }
	   getch();

}