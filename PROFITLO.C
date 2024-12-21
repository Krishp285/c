#include<stdio.h>
#include<conio.h>
void main (){
	int i,j,a;
	clrscr();
	printf("input cost  price - ");
	scanf("%d",&i);
       printf("\n input selling price -");
       scanf("%d",&j);
	printf("\nfirst number is %d",i);
       printf("\nsecond number is %d",j);
       a=j-i;

       printf("\nthe subtraction  of %d  and %d = %d" ,i,j,a);
       if (a>=0 && a<=10000)
       {
       printf("the input data is in profit");
       }
       else
       {
	 printf("the input data is not in profit");
       }
       getch();
       }