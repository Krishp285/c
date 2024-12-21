#include<stdio.h>
#include<conio.h>
#define SIZE 1
struct book
{
	char bname[20],aname[20];
	char tname[20];
	int price,edition,no_of_copies;
}b[SIZE];
void main(){
	int i;
	clrscr();
	for(i=1;i<=SIZE;i++)
	{
	printf("\nenter the name of book :-");
	scanf("%s",b[i].bname);
	printf("\nenter the name of author :-");
	scanf("%s",b[i].aname);
	printf("\nenter the title book :-");
	scanf("%s",b[i].tname);
	printf("\nenter the price of book :-");
	scanf("%d",&b[i].price);
	printf("\nenter the edition of book :-");
	scanf("%d",&b[i].edition);
	printf("\nenter the no of copies :-");
	scanf("%d",&b[i].no_of_copies);
	}

	printf("\nbookname\tauthorname\ttitle\tprice\tno of copies");


	for(i=1;i<=SIZE;i++)
	{

	printf("\n%s\t%s\t%s\t%d\t%d",b[i].bname,b[i].aname,b[i].tname,b[i].price,b[i].price,b[i].edition,b[i].no_of_copies);
	}

	getch();
	}