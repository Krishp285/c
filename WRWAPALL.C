#include<stdio.h>
#include<conio.h>
int ispallindrone(no){
	int i,temp,rev=0,n;
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
	int n,rev,no;
	clrscr();

	printf("\nenter the no:-");
	scanf("%d",&no);
	if(ispallindrone(no))
	{ printf("\nno is pallindrone ");
	}
	else{ printf("\nno is not pallindrone");/*else*/
	}
	getch();
	}