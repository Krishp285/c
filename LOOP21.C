#include<stdio.h>
#include<conio.h>
void main(){
	int i,n=32767,no,count=0,sum=0,min,max;
	clrscr();
	printf("\nenter the positive number to continue loop ");
	for(i=0;i<=n;i++)
	{
	printf("\nenter the number :-");
	scanf("%d",&no);
	if(no>0)
	{
	count++;
	sum=sum+no;
	continue;
	}
	else{
	printf("\nyou entered negative number try again");
	}
	printf("\ntotal number are :- %d",count);
	printf("\nthe sum is %d ",sum);
	printf("\nthe avg is %d ",sum/count);

	}
	for(i=0;i<n;i++)
	{

	}
	printf("%d is max number and %d is minimun number",max,min);
	break;
	getch();
	}