#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){

	char a[10]="hello";
	char b[10]="hello";
	char c[10]="hi";
	clrscr();
	//concat
	/*
	strcat(a,b);
	printf("%s",a);
	printf("\n");
	*/
	/*
	strcpy(c,a);
	printf("%s",c);
	*/
	printf("%d\n",strcmp(a,b));
	printf("%d\n",strcmp(a,c));
	getch();
	}