#include<stdio.h>
#include<conio.h>
int istwin(){
	int i,no,temp,rev=0,n,sum=0,mul=1;
	printf("\nenter the no:-");
	scanf("%d",&no);
	n=no;
	   for(;no>0;)
	   {
	   temp=no%10;
	   sum=sum+temp;
	   mul=mul*temp;
	   no=no/10;

	   }
	   if(sum==mul)
	   {
		return 1;
	   }
	   else
	   {
	   return 0;
	   }
	}
void main(){
	int n,rev;
	clrscr();
	if(istwin())
	{ printf("\nno is twin number ");
	}
	else{ printf("\nno is not twin number");
	}
	getch();
	}