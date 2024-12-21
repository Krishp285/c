#include<stdio.h>
#include<conio.h>
void main(){
	   int i,no,dc=0,sum=0,m=0,temp=0,dup=0;
	   clrscr();
	   printf("\nenter the number :-");
	   scanf("%d",&no);
	   dup=no;
	   for(;no>0;)
	   {
		      no=no/10;
		      dc++;
	   }
	   printf("\nthe digit of number is :- %d",dc);
	   no=dup;
	   for(;no>0;)
	   {
		temp=no%10;
		if(dc==1)
		{
		m=(temp);
		}
		else if(dc==2)
		{
		m=(temp*temp);
		}
		else if(dc==3)
		{
		m=(temp*temp*temp);
		}
		if(dc==4)
		{
		m=(temp*temp*temp*temp);
		}
		else if(dc==5)
		{
		m=(temp*temp*temp*temp*temp);
		}
		else
		{
		break;
		}
		sum=sum+m;
	   }
	   if(sum==no)
	   {
	   printf("\nthe number is armstrong %d",dup);
	   }
	   else
	   {
	   printf("\nthe number is armstrong %d",dup);
	   }
	   getch();
	}
