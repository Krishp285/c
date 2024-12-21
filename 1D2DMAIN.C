#include<stdio.h>
#include<conio.h>
#define SIZE 5
#define ROW 2
#define COL 2
void main(){
	int a[ROW][COL],b[ROW][COL],c[ROW][COL],choice,choice2,choice3,choice4;
	int i,j;
	clrscr();
	while(1){
	printf("\n1-->1d");
	printf("\n2-->2d");
	printf("\n3-->exit");
	printf("\nselect one dimensional or two dimensional array ");
	scanf("%d",&choice2);
	switch(choice2){
	case 1:
			printf("\n1-->addition");
			printf("\n2-->subtrtraction");
			printf("\n3-->multiplication");
			printf("\n4-->division");
			printf("\n5-->exit");
			printf("\nselect one dimensional or two dimensional array ");
			scanf("%d",&choice3);
		switch(choice3){
		case 2:printf("\n1----> for loop");
			printf("\n2----> while loop");
			printf("\n3-----> do while loop");
			printf("\nenter the choice - ");
			scanf("%d",&choice3);
		 switch(choice4){

			case 2:
			i=0,j=0;
			while(i<ROW)
			{
			while(j<COL){
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			j++;
			}//enf of 2 for loop
			i++;
			}//end of 1 for loop
			while(i<ROW) {
			{
			while(j<COL){

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			j++;
			}//end of 2 loop
			i++;
			}//end of b

			while(i<ROW)
			{
			while(j<COL){
			c[i][j] = a[i][j] + b[i][j];
			j++;
			}
			i++
			}
			while(i<ROW)
			{
			while(j<COL) {
			printf("%d + %d = %d\n",a[i][j],b[i][j],c[i][j]);
			j++;
			}//end of addition
			i++;
			}
			break;
		  case 3:
			 i=0,j=0;
			do
			{
			do{
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<COL);
			do
			{
			do{

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<ROW)
			do
			{
			do{
			c[i][j] = a[i][j] + b[i][j];
			j++;
			} while(j<COL);
			i++;
			} while(i<ROW);
			do
			{
			do{
			printf("%d + %d = %d\n",a[i][j],b[i][j],c[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<ROW);
			break;
		switch(choice){
		case 3:printf("\n1----> for loop");
			printf("\n2----> while loop");
			printf("\n3-----> do while loop");
			printf("\nenter the choice - ");
			scanf("%d",&choice2);

			case 1:

			case 2:
			i=0,j=0;
			while(i<ROW)
			{
			while(j=0;j<COL){
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			j++;
			}//enf of 2 for loop
			i++;
			}//end of 1 for loop
			while(i<ROW) {
			{
			while(j<COL){

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			j++;
			}//end of 2 loop
			i++;
			}//end of b

			while(i<ROW)
			{
			while(j<COL){
			c[i][j] = a[i][j] - b[i][j];
			j++
			}//end of c
			i++
			}
			while(i<ROW)
			{
			while(j<COL) {
			printf("%d - %d = %d\n",a[i][j],b[i][j],c[i][j]);
			j++;
			}//end of addition
			i++;
			}
			break;
			case 3:
			 i=0,j=0;
			do
			{
			do{
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<COL);
			do
			{
			do{

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<ROW)
			do
			{
			do{
			c[i][j] = a[i][j] - b[i][j];
			j++;
			} while(j<COL);
			i++;
			} while(i<ROW);
			do(i=0;i<ROW;i++)
			{
			do(j=0;j<COL;j++) {
			printf("%d - %d = %d\n",a[i][j],b[i][j],c[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<ROW);
			break;

			switch(choice){
		case 2:printf("\n1----> for loop");
			printf("\n2----> while loop");
			printf("\n3-----> do while loop");
			printf("\nenter the choice - ");
			scanf("%d",&choice2);




			case 3:
			
			case 2:
			i=0,j=0;
			while(i<ROW)
			{
			while(j=0;j<COL){
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			j++;
			}//enf of 2 for loop
			i++;
			}//end of 1 for loop
			while(i<ROW) {
			{
			while(j<COL){

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			j++;
			}//end of 2 loop
			i++;
			}//end of b

			while(i<ROW)
			{
			while(j<COL){
			c[i][j] = a[i][j] * b[i][j];
			j++
			}//end of c
			i++
			}
			while(i<ROW)
			{
			while(j<COL) {
			printf("%d * %d = %d\n",a[i][j],b[i][j],c[i][j]);
			j++;
			}//end of addition
			i++;
			}
			break;
			case 3:
			 i=0,j=0;
			do
			{
			do{
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<COL);
			do
			{
			do{

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<ROW)
			do
			{
			do{
			c[i][j] = a[i][j] + b[i][j];
			j++;
			} while(j<COL);
			i++;
			} while(i<ROW);
			for(i=0;i<ROW;i++)
			{
			for(j=0;j<COL;j++) {
			printf("%d * %d = %d\n",a[i][j],b[i][j],c[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<ROW);
			break;


			switch(choice){
	   case 2:printf("\n1----> for loop");
			printf("\n2----> while loop");
			printf("\n3-----> do while loop");
			printf("\nenter the choice - ");
			scanf("%d",&choice2);





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
			case 2:
			i=0,j=0;
			while(i<ROW)
			{
			while(j=0;j<COL){
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			j++;
			}//enf of 2 for loop
			i++;
			}//end of 1 for loop
			while(i<ROW) {
			{
			while(j<COL){

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			j++;
			}//end of 2 loop
			i++;
			}//end of b

			while(i<ROW)
			{
			while(j<COL){
			c[i][j] = a[i][j] / b[i][j];
			j++
			}//end of c
			i++
			}
			while(i<ROW)
			{
			while(j<COL) {
			printf("%d / %d = %d\n",a[i][j],b[i][j],c[i][j]);
			j++;
			}//end of addition
			i++;
			}
			break;
			case 3:
			 i=0,j=0;
			do
			{
			do{
			printf("\nenter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<COL);
			do
			{
			do{

			printf("\nenter the value of b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<ROW)
			do
			{
			do{
			c[i][j] = a[i][j] / b[i][j];
			j++;
			} while(j<COL);
			i++;
			} while(i<ROW);
			do
			{
			do {
			printf("%d / %d = %d\n",a[i][j],b[i][j],c[i][j]);
			j++;
			}while(j<COL);
			i++;
			}while(i<ROW);
			break;

















			case 5: exit(0);
			default:printf("\ninvalid choice");
			}
			}
			getch();
			}