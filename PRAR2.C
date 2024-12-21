#include<stdio.h>
#include<conio.h>
void main(){
	int a[3][3],sum=0;
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("\nenter the value of a[%d][%d]",i,j);
	scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<3;i++)
	{
	sum=0;
	for(j=0;j<3;j++)
	{
	sum=sum+a[i][j];
	printf("%d\t",a[i][j]);
	}
	printf("---%d",sum);
	printf("\n");

	printf("\n");
	}


	getch();
	}