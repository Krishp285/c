/*
		 Author:Krish patel
		 DOC:06-06-2023
		 Objective: print 10 int,float,char or double using double
*/
#include<stdio.h>
#include<conio.h>
void main (){
	int a[100];
	int i,size;
	clrscr();
	printf("enter the number of array");
	scanf("%d",&size);
	 for(i=0;i<size;i++){
	 printf("\nEnter the values you want a[%d] = ",i);
	scanf("%d",&a[i]);
		}
		printf("the array is = ");
		for(i=0;i<size;i++)
			{
			printf("%d\t",a[i]);
			}
			printf("\nthe reverse array is = ");
				for(i=size-1;i>=0;i--)
			{
			printf("%d\t",a[i]);
			}
	getch();
	}
