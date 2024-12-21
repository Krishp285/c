#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	int a[10];
	int *y;
	clrscr();
	for(i=0;i<10;i++){
	printf("\nenter the value ");
	scanf("%d",&a[i]);

	} y=a;
	for(i=0;i<10;i++){
		printf("\nthe value is %d and address is %u",*(y+i),y+i);
	}
	getch();
	}