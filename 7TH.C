#include<stdio.h>
#include<conio.h>
void main()
{
     int k,i,j,n=1;
     clrscr();
     printf("\nenter the number of rows: ");
     scanf("%d",&k);
     for(i=1;i<=k;i++)
     {
       for(j=1;j<=i;j++)
       {
	  printf("%d",n);
	  n++;
       }
       printf("\n");
     }



    getch();
}//end of main