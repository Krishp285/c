#include<stdio.h>
#include<conio.h>
void main(){
	FILE  *fp;
	char buff[40];
	clrscr();
	fp = fopen("test1.txt","r");

	while( fscanf(fp,"%s",buff) !=EOF )
	{
	   printf("%s ",buff);
	}
	fclose(fp);
	getch();
	}