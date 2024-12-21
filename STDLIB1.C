#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//standered library (generate random number from computer)
void main(){
	int i,num;
	clrscr();
	for(i=0;i<=20;i++)
	{
	num=rand()%3;//  %3 means less than 3 number computer of its choice will print randomly
	printf("\n%d",num);
	}
	getch();
}


