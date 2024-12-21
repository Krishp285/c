#include<stdio.h>
#include<conio.h>
void prime (int n);
void main(){
	int num;
	clrscr();
	printf("\nenter the number");
	scanf("%d",&num);
	prime(num);
	getch();
	}
void prime(int n){
	int i,flag=0;
	for(i=2;i<n;i++){
	if(n%i==0){
	     flag=1;
	}
	}
	if(flag==1){
	printf("\nthe number is not  prime");
	}
	else{
	printf("\nthe number is prime");
	}
	}

