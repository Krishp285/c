#include<stdio.h>
#include<conio.h>
void main(){
	int strokes;
	clrscr();
	printf("\nenter the strokes ");
	scanf("%d",&strokes);
	if(strokes==7)
	{
	 printf("\nscore:-PAR");
	}
	if(strokes==5 || strokes==6)
	{
	 printf("\nscore:-BIRDY");
	}
	if(strokes>=2 && strokes<=4)
	{
	 printf("\nscore:-EAGLE");
	}
	if(strokes==1)
	{
	 printf("\nscore:-HOLE IN ONE");
	}
	if(strokes==8 || strokes==9)
	{
	 printf("\nscore:-BOGEY");
	}
	if(strokes==10)
	{
	 printf("\nscore:-DOUBLE BOGEY");
	}
	if(strokes>=10)
	{
	 printf("\nscore:-GO HOME");
	}
	getch();
	}
