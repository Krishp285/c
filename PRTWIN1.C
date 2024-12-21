#include<stdio.h>
#include<conio.h>
void main(){
	   int i,no,sum=0,mul=1,dup,temp,twin=0;
	   clrscr();
	   for(i=100;i<=1000;i++)
	   {
	   dup=no=i;
	   sum=0;
	   mul=1;
	   while(no>0)
	   {
	   temp=no%10;
	   sum=sum+temp;
	   mul=mul*temp;
	   no=no/10;

	   }
	   if(sum==mul)
	   {
	   twin++;
	   printf("%d ",dup);
	   }
	   }
	   printf("\nthe toatal number is %d",twin);
	   getch();
}