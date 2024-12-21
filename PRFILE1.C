#include<stdio.h>
#include<conio.h>
void main(){
	FILE  *fp;
	clrscr();
	fp = fopen("test1.txt","w");
	fprintf(fp,"\nthis is c language");
	fclose(fp);
	getch();
	}