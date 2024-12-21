#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main(){
	int a[SIZE],b[SIZE],c[SIZE],choice;
	int i;
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
		case 1: printf("\nenter the %d value for first array\n",SIZE);
			for(i=0;i<SIZE;i++)
			{
			printf("\nenter the value of a[%d]",i);
			scanf("%d",&a[i]);
			}//end of a
			for(i=0;i<SIZE;i++)
			{
			printf("\nenter the value of b[%d]",i);
			scanf("%d",&b[i]);
			}//end of b
			for(i=0;i<SIZE;i++)
			{
			c[i] = a[i] + b[i];
			}//end of c
			for(i=0;i<SIZE;i++)
			{
			printf("%d + %d = %d\n",a[i],b[i],c[i]);
			}//end of addition
			break;
			case 2:
			for(i=0;i<SIZE;i++)
			{
			printf("\nenter the value of a[%d]",i);
			scanf("%d",&a[i]);
			}//end of a
			for(i=0;i<SIZE;i++)
			{
			printf("\nenter the value of b[%d]",i);
			scanf("%d",&b[i]);
			}//end of b
			for(i=0;i<SIZE;i++)
			{
			c[i] = a[i] - b[i];
			}//end of c
			for(i=0;i<SIZE;i++)
			{
			printf("%d - %d = %d\n",a[i],b[i],c[i]);
			}//end of subtraction
			break;
			case 3:
			for(i=0;i<SIZE;i++)
			{
			printf("\nenter the value of a[%d]",i);
			scanf("%d",&a[i]);
			}//end of a
			for(i=0;i<SIZE;i++)
			{
			printf("\nenter the value of b[%d]",i);
			scanf("%d",&b[i]);
			}//end of b
			for(i=0;i<SIZE;i++)
			{
			c[i] = a[i] * b[i];
			}//end of c
			for(i=0;i<SIZE;i++)
			{
			printf("%d * %d = %d\n",a[i],b[i],c[i]);
			}//end of multiplication
			break;
			case 4:
			for(i=0;i<SIZE;i++)
			{
			printf("\nenter the value of a[%d]",i);
			scanf("%d",&a[i]);
			}//end of a
			for(i=0;i<SIZE;i++)
			{
			printf("\nenter the value of b[%d]",i);
			scanf("%d",&b[i]);
			}//end of b
			for(i=0;i<SIZE;i++)
			{
			c[i] = a[i] / b[i];
			}//end of c
			for(i=0;i<SIZE;i++)
			{
			printf("%d / %d = %d\n",a[i],b[i],c[i]);
			}//end of division
			break;
			case 5: exit(0);
			default:printf("/ninvalid choice");
			}
			}
			getch();
			}

