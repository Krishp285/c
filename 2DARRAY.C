/*
		 Author:Krish patel
		 DOC:06-06-2023
		 Objective: print 10 int,float,char or double using double
*/
#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 3
void main (){
	int a[3][3];
	int i,j;
	clrscr();
	for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("\nenter the value of a[i][j]",i,j);
		scanf("%d",&a[i][j]);
		}
		}
			for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("%d",a[i][j]);
		}
		printf("\n");
		}
		getch();
		}