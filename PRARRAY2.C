#include<stdio.h>
#include<conio.h>
#define SIZE 7
void main(){
	int a[SIZE],i,b[SIZE],c[SIZE];
	clrscr();
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of a[%d]",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of b[%d]",i);
	scanf("%d",&b[i]);
	}
	for(i=0;i<SIZE;i++){
	c[i]=a[i]+b[i];
	}
	for(i=0;i<SIZE;i++){
	printf("\n%d + %d =%d",a[i],b[i],c[i]);
	}
	getch();
	}