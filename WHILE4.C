#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,a,col,tri;
	clrscr();
	printf("\nenter the number of rows");
	scanf("%d",&col);
	printf("\nenter the number of triangle");
	scanf("%d",&tri);
	a=1;
	while(a<=tri)
	{
	i=1;
	while(i<=col)
	{
	/* k=6;
	while(k>i)
	{
	printf(" ");
	k--;
	}  */
	j=1;
	 while(j<=i)
	 {
		printf("* ");
		j++;
	 }
	 printf("\n");
	 i++;
	}
	a++;
	}
	getch();
	}