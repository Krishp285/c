/*
		 Author:Krish patel
		 DOC:06-06-2023
		 Objective: print 10 int,float,char or double using double
*/
#include<stdio.h>
#include<conio.h>
#define ROW 3
#define COL 5
void main (){
	int i,j;
	clrscr();
	for(i=0;i<ROW;i++) {
	       for(j=0,j<col;j++){
			printf("\nenter the value of a[i][j]",i,j);
			scanf("%d",&a[i][j]);
			}
	       }
		for(i=0;i<ROW;i++) {
	       for(j=0,j<col;j++){

			printf("%d\t",&a[i][j]);
			}
			printf("\n");
			}
			getch();
			}
