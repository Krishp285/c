#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k;
   clrscr();
   printf("\nEnter the number of rows: ");
   scanf("%d",&k);
   for (i=1;i<=k;i++)
    {
       for(j=1;j<=i;j++)
	{
	   printf("%d",j);
	}
       printf("\n");

     }
     getch();

}