#include<stdio.h>
#include<conio.h>
void main(){
	float n,i,sum=0;
	clrscr();
	printf("\nenter the number of terms");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
	sum=sum+(1/i);
	}
	printf("\nthe addition of harmonic series is %.2f",sum);
	getch();
	}