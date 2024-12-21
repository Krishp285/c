#include<stdio.h>
#include<conio.h>
#define ROW 2
#define COL 2
void main(){
	int a[ROW][COL],b[ROW][COL],c[ROW][COL],choice;
	int i,j;
	clrscr();
	printf("\n1-->addition");
	printf("\n2-->subtrtraction");
	printf("\n3-->multiplication");
	printf("\n4-->division");
	printf("\n5-->exit");
	while(1){
	printf("\nenter the choice of array you want to print = ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			}//enf of 2 for loop
			}//end of 1 for loop
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			}//end of 2 loop
			}//end of b
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){
			c[i][j] = a[i][j] + b[i][j];
			}//end of c
			}
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++) {
			printf("%d + %d = %d\n",a[i][j],b[i][j],c[i][j]);
			}//end of addition
			}
			break;
			case 2:
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			}//enf of 2 for loop
			}//end of 1 for loop
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			}//end of 2 loop
			}//end of b
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){
			c[i][j] = a[i][j] - b[i][j];
			}//end of c
			}
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){
			printf("%d - %d = %d\n",a[i][j],b[i][j],c[i][j]);
			}//end of subtraction
			}
			break;
			case 3:
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			}//enf of 2 for loop
			}//end of 1 for loop
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){
			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			}//end of 2 loop
			}//end of b
			for(i=0;i<ROW;i++)
			{

			for(j=0;j<COL;j++){
			c[i][j] = a[i][j] * b[i][j];
			}
			}//end of c
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){
			printf("%d * %d = %d\n",a[i][j],b[i][j],c[i][j]);
			}//end of multiplication
			}
			break;
			case 4:
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			}//enf of 2 for loop
			}//end of 1 for loop
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			}//end of 2 loop
			}//end of b
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++){
			c[i][j] = a[i][j] / b[i][j];
			}//end of c
			}
			for(i=0;i<ROW;i++)
			{
			 for(j=0;j<COL;j++){
			printf("%d / %d = %d\n",a[i][j],b[i][j],c[i][j]);
			}//end of division
			}
			break;
			case 5: exit(0);
			default:printf("\ninvalid choice");
			}
			}
			getch();
			}