#include<stdio.h>
#include<conio.h>
void main (){
	int i,j,k,a;
	clrscr();
	printf("\nenter the side 1 - ");
	scanf("%d",&i);
	printf("\nenter the side 2 - ");
	scanf("%d",&j);
	printf("\nenter the angle 3 - ");
	scanf("%d",&k);
	printf("\nfirst number is %d",i);
       printf("\nsecond number is %d",j);
       a=i+j;

       printf("\nthe addition of %d and %d = %d" ,i,j,a);
       if (a>=0 && a<=k)
       {
       printf("the triangle is correct");
       }
       else
       {
	 printf("the triangle is not correct");
       }
       getch();
       }