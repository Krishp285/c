#include<stdio.h>
#include<conio.h>
void main(){
	char a;
	clrscr();
	printf("\nenter the value");
	scanf("%c",&a);
	if(a>=65 || a<91)
	{
	printf("\nthe value is alphabet");
	}
	else if(a>=0 || a<10)
	{
	printf("\nthe value is number");
	}
	else
	{
	printf("\nthe value is special character");
	}
	getch();
}