#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	clrscr();
	printf("\n enter the character ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("\n the enter character is in upper case");
		}
	else if(ch>=97 && ch<=122)
	{
	printf("\nthe number is in lower case");
	}
	else
	{
	printf("\n it is not an alphabet");
	}
	getch();
	}