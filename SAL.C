#include<stdio.h>
#include<conio.h>
void main(){
	int i,a[5] = {11,12,13,14,15},no;
	clrscr();
	printf("\nenter element to search ;-");
	scanf("%d",&no);
	for(i=0;i<5;i++)
	{
		if(a[i] == no)
		{
			printf("\nsearch found at %d",i+1);
			break;
		}
	}
	getch();
	}