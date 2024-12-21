#include<stdio.h>
#include<conio.h>
void pattern();
void main() {
	clrscr();
	pattern();
	getch();
}
void pattern(){
	int  rows,i,j,k=1;
	printf("\nenter the number of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
	for(j=1;j<=i;j++){
		printf(" %d ",k++);

		}

		printf("\n");
		}

		}