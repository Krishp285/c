#include<stdio.h>
#include<conio.h>
int add(int a,int b);
void sub();
void mul(int a, int b);
int div();

void main(){
	int a,b,choice;
	while(1){
	clrscr();
	printf("\n1 for add");
	printf("\n2 for sub");
	printf("\n3 for mul");
	printf("\n4 for div");
	printf("\n5 for exit");
	printf("\nenter the choice :-");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1 :printf("\nenter the value of a :-");
				scanf("%d",&a);
				printf("\nenter the value of b :-");
				scanf("%d",&b);
				add(a,b);
				break;
			case 2 : sub();
				break;

			case 3 : printf("\nenter the value of a :-");
				scanf("%d",&a);
				printf("\nenter the value of b :-");
				scanf("%d",&b);
				 mul(a,b);
				break;
			case 4: div();
				break;
			case 5 :exit();
				break;
		}

	getch();
	}
	}

int add(int a,int b)
	{
	int ans;
	ans = a+b;
	printf("\nthe sum is %d",ans);
	}


void sub()
	{
	int ans,a,b;
	printf("\nenter the value of a :-");
	scanf("%d",&a);
	printf("\nenter the value of b :-");
	scanf("%d",&b);
	ans = a-b;
	printf("\nthe sub is %d",ans);
	}

void mul(int a,int b)
		{
		 int ans;
		 ans = a*b;
		 printf("\nthe mul is %d",ans);
		}

int div()
	{
	 int ans,a,b;
	 printf("\nenter the value of a :-");
	scanf("%d",&a);
	printf("\nenter the value of b :-");
	scanf("%d",&b);
	 ans = a/b;
	 printf("\nthe div is %d",ans);


	}