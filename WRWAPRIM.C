#include<stdio.h>
#include<conio.h>
int isprime(int no){
	int i;
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
	int no;
	clrscr();
	printf("\nenter no:-");
	scanf("%d",&no);
	isprime(no) ? printf("\nno is prime ")/*if*/ : printf("\nno is not prime");/*else*/
	getch();
	}