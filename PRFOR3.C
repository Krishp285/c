#include<stdio.h>
#include<conio.h>
void main(){
	int i,sum=0,sum1=0;
	clrscr();
	for(i=1;i<=50;i++){
	if(i%2==0){
	printf("\n%d",i);
	sum=sum+i;
	}
	}
	printf("\nthe sum is %d",sum);
	for(i=1;i<=50;i++){
	if(i%2!=0){
	printf("\n%d",i);

	sum1=sum1+i;
	}
	}
	printf("\nthe sum is %d",sum1);
	getch();
	}