#include<stdio.h>
#include<conio.h>
void main(){
	   int i,j,k,l=1;
	   clrscr();
	   for(i=1;i<=5;i++)
	   {
	   for(k=(5-i);k>=1;k--)
	   {
	   printf(" ");
	   }
	   for(j=1;j<=i;j++)
	   {
	   printf("%d ",l);
	   l=l+2;
	   }
	   printf("\n");
	   }
	   for(i=4;i>=1;i--)
	   {
	   for(k=(5-i);k>=1;k--)
	   {
	   printf(" ");
	   }
	   for(j=1;j<=i;j++)
	   {
	   printf("%d ",l);
	   l=l+2;
	   }
	   printf("\n");
	   }
	   getch();
	   }