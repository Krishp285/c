#include<stdio.h>
#include<conio.h>
#define SIZE 3
struct hotel
{
	 int rating,charges,room;
	 char name[40];

}h[SIZE];
void main(){
	int i,no,k,x,min;
	clrscr();


	for(i=0;i<SIZE;i++)
	{
	printf("\nenter the name of hotel :-");
	scanf("%s",h[i].name);
	printf("\nenter room charges :-");
	scanf("%d",&h[i].charges);
	printf("\nenter hotel grade :-");
	scanf("%d",&h[i].rating);
	printf("\nenter no of room :-");
	scanf("%d",&h[i].room);
	}

	min = h[0].charges;

	for(i=0;i<SIZE;i++)
	{
		if(min > h[i].charges)
		{
			printf("\n%s\t%d\t%d\t%d",h[i].name,h[i].charges,h[i].rating,h[i].room);
		}
	}
/*	printf("\nname\tcharges\trating\troom");

	min = h[0].charges;
	for(i=0;i<SIZE;i++)
	{
		if(min > h[i].charges)
		{
			//h[i].charges =  h[i+1].charges;
			x = i;
			min = h[i].charges;
			printf("\nmin : %d--i--%d-",min,i);
		}
	}
       //	printf("\n%s\t%d\t%d\t%d",h[x].name,h[x].charges,h[x].rating,h[x].room);
	 printf("\n%d",x);
*/	getch();
	}