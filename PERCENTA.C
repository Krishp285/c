#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,l,m,a,avg;
	char ch;
	clrscr();
	printf("\n enter the marks of physics - ");
	scanf("%d",&i);
	printf("\n enter the marks of chemistry - ");
	scanf("%d",&j);
	printf("\n enter the marks of english - ");
	scanf("%d",&k);
	printf("\n enter the marks of computer - ");
	scanf("%d",&l);
	printf("\n enter the marks of mathematics - ");
	scanf("%d",&m);
	printf("\nfirst number is %d",i);
       printf("\nsecond number is %d",j);
       printf("\nfirst number is %d",k);
       printf("\nsecond number is %d",l);
       printf("\nfirst number is %d",m);
       a=i+j+k+l+m ;

       printf("\nthe addition of %d %d %d %d and %d = %d" ,i,j,k,l,m,a);
       avg=a/5;
       printf("\nthe percentage is %d",avg);
	if(avg>=90)
	{
	printf("\n A grade");
	}
	if(avg>=80)
	{
	printf("\n B grade");
	}
	if (avg>=70)
	{
	printf("\n c grade");
	}
	if (avg>=60)
	{
	printf("\n D grade");
	}
	if (avg>=50)
	{
	printf("\n E grade");
	}
	if (avg>=40)
	{
	printf("\n F grade");
	}
	else if(avg<=30)
	{
	 printf("\nyou are fail");
	}
	getch();
	}