#include<stdio.h>
#include<conio.h>
void main(){
	int i,rem,rev=0;
	clrscr();
	printf("\nenter the number - ");
	scanf("%d",&i);
	while(i>0)
	{
	 rem=i%10;
	rev=(rev*10)+rem;
	 i=i/10;
	}
	i=rev;
	while(i>0){
	rem=i%10;
	if(rem==0)
	{        printf("zero");

	}
	else if(rem==1)
	{
	printf("one");
	}
	if(rem==2)
	{        printf("two");

	}

	else if(rem==3)
	{
	printf("three");
	}

	if(rem==4)
	{        printf("four");

	}

	else if(rem==5)
	{
	printf("five");
	}
	if(rem==6)
	{        printf("six");

	}

	else if(rem==7)
	{
	printf("seven");
	}

	if(rem==8)
	{        printf("eight");

	}

	else if(rem==9)
	{
	printf("nine");
	}
	i=i/10;

	}
	getch();
	}