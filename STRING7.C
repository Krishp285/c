#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char stmt[50];
	int i;
	clrscr();
	printf("\nenter the string");
	gets(stmt);
	for(i=0;stmt[i]!='\0';i++)
	{
	if((stmt[i]!=' ') && (stmt[i]>97 && stmt[i]<=122))
	{
	stmt[i]=stmt[i]-32;
	}

	}
	printf("\nstring is %s",stmt);
	getch();
	}