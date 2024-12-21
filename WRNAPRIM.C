#include<stdio.h>
#include<conio.h>
int isprime(){
	int i,no;
	printf("\nenter the no:-");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
		     return 0;
		}
	}
	return 1;
}
void main(){
	int flag;
	clrscr();
	isprime() ? printf("\nno is prime ")/*if*/ : printf("\nno is not prime");/*else*/
	getch();
	}