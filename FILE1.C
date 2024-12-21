#include<stdio.h>
#include<conio.h>
void main(){
	char name[30];
	FILE *fp;
	clrscr();
	fp=fopen("KRISH.txt","w");// w write  r read a
	fprintf(fp,"%s","india");
	fclose(fp);
	fp=fopen("KRISH.txt","r");// w write  r read a
	fscanf(fp,"%s",name);
	printf("\nthe string is %s",name);
	fclose(fp);
	getch();
	}