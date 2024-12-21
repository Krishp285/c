#include<stdio.h>
#include<conio.h>
int rev();

void main()
{
	int no;
	clrscr();
	rev();
	getch();


}
int rev()
	{
	int temp=0,rev=0,no;
	printf("\nenter the number :-");
	scanf("%d",&no); //123

	for(;no>0;){
	temp = no%10;
	rev=(rev*10)+temp;
	no = no/10;
	}
	printf("\nrev is %d",rev);
}