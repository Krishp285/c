#include<stdio.h>
#include<conio.h>
int ispallindrone(){
	int i,no,temp,rev=0,n;
	printf("\nenter the no:-");
	scanf("%d",&no);
	n=no;
	   for(;no>0;)
	   {
	    temp=no%10;
	    rev=(rev*10)+temp;
	    no=no/10;
	   }
	if(n==rev)
	{
	return 1;
	}
	else{
		 return 0;
	}
}

void main(){
	int n,rev;
	clrscr();
	if(ispallindrone())
	{ printf("\nno is pallindrone ");
	}
	else{ printf("\nno is not pallindrone");/*else*/
	}
	getch();
	}