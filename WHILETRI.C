#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,a,b;
	clrscr();
	printf("\nenter the number of rows");
	scanf("%d",&b);
	printf("\nenter the number of triangle");
	scanf("%d",&a);
	k=1;
	while(k<=a){
	i=1;
	while(i<=b)
	{
	j=1;
	 while(j<=i)
	 {
		printf("*");
		j++;
	 }
	 printf("\n");
	 i++;
	}
	printf("\n");
	k++;
	}
	getch();
	}