#include<stdio.h>
#include<conio.h>

void main(){
	int i,sum=0,n;
	float avg;
	clrscr();
	printf("\nenter the 10 number to find sum and avg");
	for(i=0;i<11;i++){
	printf("\nthe number %d ",i);
	scanf("%d",&n);
	sum=sum+n;
	}
	printf("\nthe sum is %d",sum);
	avg=sum/10;
	printf("\nthe avg is %.2f",avg);
	getch();
	}