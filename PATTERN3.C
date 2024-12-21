#include<stdio.h>
#include<conio.h>
void pyramid();
void main(){
	int row;
	clrscr();
	pyramid();
	getch();
	}

void pyramid(){
	int i,row,j,p,q;
	printf("\nenter the number of rows");
	scanf("%d",&row);
	for(i=0;i<=row;i++){
	if(i%2==0){
	p=1;
	q=0;
	}
	else{
	 p=0;
	 q=1;
	}
	for(j=0;j<=i;j++){
	if(j%2==0){
	printf("%d",p);
	}
	else{
	printf("%d",q);
	}
	}
	printf("\n");
	}
	}
