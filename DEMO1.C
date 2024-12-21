#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int x1,y1,x2,y2,d,choice;
	clrscr();
	printf("\nenter the value of point (x1,y1):-");
	scanf("%d%d",&x1,&y1);
	printf("\nenter the value of point (x2,y2):-");
	scanf("%d%d",&x2,&y2);
	d*d=(x2-x1)*(x2-x1)+(y2-y1)(y2-y1);
	printf("\nthe ans is %d",d*d);
	getch();

	}