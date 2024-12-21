#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
	for(j=5;j>=i;j--){
	    printf("*");
	}
	for(k=1;k<=i;k++)
	{
	printf("  ");
	}
	for(j=5;j>=i;j--){
	    printf("*");
	}
	printf("\n");
	}
	for(i=5;i>=1;i--)
	{
	for(j=5;j>=i;j--){
	    printf("*");
	}
	for(k=1;k<=i;k++)
	{
	printf("  ");
	}
	for(j=5;j>=i;j--){
	    printf("*");
	}
	printf("\n");
	}
	getch();
	}