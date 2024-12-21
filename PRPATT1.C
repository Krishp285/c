#include<stdio.h>
#include<conio.h>
void main(){
	   int i,num,j,rows;
	   clrscr();
	   printf("\nenter the number of rows :-");
	   scanf("%d",&rows);
	   printf("\nenter the number of * :-");
	   scanf("%d",&num);
	   for(i=1;i<=rows;i++)
	   {
	   for(j=1;j<=num;j++){
	   printf("*\t");
	   }
	   printf("\n");
	   }
	   getch();
	   }