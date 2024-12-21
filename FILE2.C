#include<stdio.h>
#include<conio.h>
void main(){
	char name[30];
	char str[30];
	FILE *fp;
	clrscr();
	printf("\Nenter the string");
	scanf("%s",str);
	fp=fopen("a.txt","w");// w write  r read a
	fprintf(fp,"%s",str);
	fclose(fp);
	fp=fopen("a.txt","r");// w write  r read a
	fscanf(fp,"%s",name);
	printf("\nthe string is %s",name);
	fclose(fp);
	getch();
	}