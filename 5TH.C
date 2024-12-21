#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,sum=0;
   float avg;
   clrscr();
   printf("\nEnter the 10 number: \n");
   for(i=1;i<=10;i++)
   {
      printf("Number:- %d ",i);
      scanf("%d",&n);
      sum+=n;
   }
   avg=sum/10.0;
   printf("the sum of 10 number is :%d\n2 the average is :%f\n",sum,avg);

getch();
}