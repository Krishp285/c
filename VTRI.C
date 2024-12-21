#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,q,k;
	clrscr();
	printf("\nenter the no. of rows");
	scanf("%d",&q);
	for(k=0;k<=q;k++){
	for(i=0;i<=q;i++) //rows
	{
	for(j=1;j<=i;j++){    //column
	printf("@");
	}
	printf("\n");
	}
 /*	for(i=q;i>=1;i--)
	{
	for(j=1;j<=i;j++){
	 printf("@");
	}
	printf("\n");
	}*/
  
	}
	getch();
	}