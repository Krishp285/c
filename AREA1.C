#include<iostream.h>
#include<conio.h>
#include<process.h>
int main(){
	char i;
	clrscr();
	cout<<"enter the value ";
	cin>>" %c",&i;
	if(i>= 'a' && i<= 'z' )
	{
	cout<<"the value is alphabet";
	}
	else if(i>=0 && i<=9)
	{
	cout<<"the value is number";
	}
	else
	{
	cout<<"the value special character";
	}
	getch();
	return 0;
	}