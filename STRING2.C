#include<stdio.h>
#include<stdio.h>
#include<string.h>
void main(){
	char name[30],name1[30];
	int len,x;
	clrscr();
	printf("\nenter the string\n");
	gets(name);
	printf("\nthe string is %s",name);
	printf("\nenter the string\n");
	gets(name1);
	strcat(name,name1);
	printf("\nthe concated string is %s",name);
	getch();
	}