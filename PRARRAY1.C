#include<stdio.h>
#include<conio.h>
#define SIZE 7
void main(){
	int rollno[SIZE],i;
	clrscr();
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of a[%d]",i);
	scanf("%d",&rollno[i]);
	}
	for(i=0;i<SIZE;i++){
	printf("\n%d",rollno[i]);

	}
	getch();
	}