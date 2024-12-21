#include<stdio.h>
#include<conio.h>
void main(){
	   char a[10],b[10],c[10],d[10],e[10];
	   FILE *fp;
	   clrscr();
	   fp = fopen("name1.txt","w");
	   //fprintf(fp,"\nenter the five name :- ");
	   scanf("%s%s%s%s%s",a,b,c,d,e);
	   fprintf(fp,"%s\n%s\n%s\n%s\n%s",a,b,c,d,e);
	   fclose(fp);
	   getch();
}