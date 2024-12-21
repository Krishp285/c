#include<stdio.h>
#include<conio.h>
int istwin(int no){
	int i,temp,rev=0,n,sum=0,mul=1;
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
	int no;
	clrscr();
	printf("\nenter the no:-");
	scanf("%d",&no);
	if(istwin(no))
	{ printf("\nno is twin number ");
	}
	else{ printf("\nno is not twin number");
	}
	getch();
	}