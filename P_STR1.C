#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char name[30];
	int std;
};
void main(){
	struct student s[5];
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
	printf("\nenter the roll no :-");
	scanf("%d",&s[i].rno);
	printf("\nenter the name :-");
	scanf("%s",s[i].name);
	printf("\nenter the standered :-");
	scanf("%d",&s[i].std);
	}
	printf("\nrno\tname\tstd");
	for(i=1;i<=5;i++)
	{
	printf("\n%d\t%s\t%d",s[i].rno,s[i].name,s[i].std);
	}
	getch();
	}