#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,ch1,ch2,ch3;
	clrscr();
	printf("press 1 for horizontal\n");
	printf("press 2 for vertical\n");
	printf("\nenter the triangle you want to print");
	scanf("%d",&ch1);
	switch(ch1)
	{
	 case(1):
	printf("press 3 for normal\n");
	printf("press 4 for reverse\n");
	printf("\nenter type of triangle");
	scanf("%d",&ch3);
	switch(ch3)
		 {
		 case(3):
		 i=1;
	do{
		printf("*\t\t");
		i++;
	}while(i<=3);
	printf("\n");
	i=1;
	do{
		printf("**\t\t");
		i++;
	}while(i<=3);
	printf("\n");
	i=1;
	do{
		printf("***\t\t");
		i++;
	}while(i<=3);
	printf("\n");
	i=1;
	do{
		printf("****\t\t");
		i++;
	}while(i<=3);
	printf("\n");
	i=1;
	do{
		printf("*****\t\t");
		i++;
	}while(i<=3);
	printf("\n");

		 break;
		 case(4):
		 {
		 i=1;
	do{
		printf("*****\t\t");
		i++;
	}while(i<=3);
	printf("\n");
	i=1;
	do{
		printf("****\t\t");
		i++;
	}while(i<=3);
	printf("\n");
	i=1;
	do{
		printf("***\t\t");
		i++;
	}while(i<=3);
	printf("\n");
	i=1;
	do{
		printf("**\t\t");
		i++;
	}while(i<=3);
	printf("\n");
	i=1;
	do{
		printf("*\t\t");
		i++;
	}while(i<=3);
	printf("\n");
	break;
		 }


		 break;


	 case 2:
	printf("press 3 for normal\n");
	printf("press 4 for reverse\n");
	scanf("%d",&ch2);
		 switch(ch2)
		 {
		 case(3):
		 k=1;
	do{
	  i=1;
		do{
			j=1;
					do{
					printf("*");
					j++;
					}while(j<=i);
		printf("\n");
		i++;
		}while(i<=5);


	  printf("\n");
	  k++;
	}while(k<=3);
		 break;
		 case(4):
		 k=1;
	do{
	  i=5;
		do{
			j=1;
					do{
					printf("*");
					j++;
					}while(j<=i);
		printf("\n");
		i--;
		}while(i>=1);

	  printf("\n");
	  k++;
	}while(k<=3);
		 break;
		 }
	 break;
	}
	getch();


}                }