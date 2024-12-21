#include<stdio.h>
#include<conio.h>
#define ROW 4
#define COL 4
#define ROW1 4
#define COL1 1
void main (){
	int a[ROW][COL],b[ROW1][COL1],c[ROW][COL]={0};
	int i,j,k;
	clrscr();
	printf("\nenter the value of 1ST matrix");
	for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("\nenter the value of a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
			  }
			  }
	for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("%d\t",a[i][j]);
			  }
			  printf("\n");
			  }



	printf("\nenter the value of 2ND matrix");
	for(i=0;i<ROW1;i++){
	for(j=0;j<COL1;j++){
		printf("\nenter the value of b[%d][%d]",i,j);
		scanf("%d",&b[i][j]);
			  }
			  }

	for(i=0;i<ROW1;i++){
	for(j=0;j<COL1;j++){
		printf("%d\t",b[i][j]);
			  }
			  printf("\n");
			  }
			  printf("\nthe answer of matrix multiplication is \n");
	for(i=0;i<ROW1;i++){
	for(j=0;j<COL1;j++){
	for(k=0;k<ROW1;k++){
			c[i][j]=c[i][j] + (a[i][k]*b[k][j]);
			}
			}
			}
	for(i=0;i<ROW1;i++){
	for(j=0;j<COL1;j++){
		printf("%d\t",c[i][j]);
			  }
			  printf("\n");
			  }
			  getch();
			  }
