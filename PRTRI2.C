#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,no;
	clrscr();
	printf("\nenter the numbe rof rows :-");
	scanf("%d",&no);
		for(i=1;i<=no;i++)
		{
			for(k=(5-i);k>=1;k--)
			{
				printf(" ");
			}
				for(j=1;j<=i;j++)
				{
					printf("* ");
				}
				printf("\n");

		}
	    getch();
	    }