#include<stdio.h>
#include<conio.h>
#define SIZE 24
#define SIZE1 79
void main(){
	int k,l;
	clrscr();
	for(k=0;k<SIZE;k++)
	{
	for(l=0;l<SIZE1;l++)
	{
	if(k==0 || k==SIZE-1 || l==0 || l==SIZE1-1)
	{
	printf("#");
	}
	else
	{
	printf(" ");
	}
	}
	printf("\n");
	}
	gotoxy(39,13);
	printf("krish p@tel");
	getch();
	}

