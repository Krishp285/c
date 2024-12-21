#include<stdio.h>
#include<conio.h>
void main(){
	FILE *fp;
	char ch;
	char name[30];
	clrscr();
	fp=fopen("t1.txt","w+");
	while((ch=getc())!=EOF)