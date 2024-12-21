#include<stdio.h>
#include<conio.h>
void main(){
	int i,no,flag=0;
	clrscr();
	printf("\nenter the number ");
	scanf("%d",&no);//7
	for(i=2;i<no;i++)
	{
	 if(no%i==0)
	     {
	      flag=1;
	      }
	}

	if(flag==1){
	  printf("\nthe number is composite");
	 }
	 else
	 {
	    printf("\nthe number is prime");
	 }
	getch();
	}