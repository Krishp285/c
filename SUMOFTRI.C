#include<stdio.h>
#include<conio.h>
void main (){
	int i,j,k,a;
	clrscr();
	printf("\nenter the angle 1 - ");
	scanf("%d",&i);
	printf("\nenter the angle 2 - ");
	scanf("%d",&j);
	printf("\nenter the angle 3 - ");
	scanf("%d",&k);
	printf("\nfirst number is %d",i);
       printf("\nsecond number is %d",j);
       a=i+j+k;

       printf("\nthe addition of %d %d and %d = %d" ,i,j,k,a);
       if (a=180 && a<=180)
       {
       printf("the triangle is correct");
       }
       else
       {
	 printf("the triangle is not correct");
       }
       getch();
       }