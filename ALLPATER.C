/*

       ALL patern in switch case.....

*/
#include<stdio.h>
#include<conio.h>
#define size 5
#define bs 10
#define step 7
void  main()
{
	int choice,num=2;
	int i,j,k,l=2,m;
	int flag,no;
	while(1)
	{
	clrscr();
	printf("********************************************************************************");
	gotoxy(30,3);
	printf("<--- ALL PATERNS --->");
	printf("\n\n********************************************************************************");
	printf("\n1-->Normal Tringle");
	printf("\n2-->Revrse Tringle");
	printf("\n3-->Upper & Half Daimond");
	printf("\n4-->Down & Half Daimond");
	printf("\n5-->Full Daimond");
	printf("\n6-->Square");
	printf("\n7-->Ractangle");
	printf("\n8-->Border");
	printf("\n9-->Hourglass");
	printf("\n10-->daimond using odd numbers");
	printf("\n11-->daimond using even numbers");
	printf("\n12-->Left side arrow");
	printf("\n13-->Right side arrow");
	printf("\n14-->Steps Type patern");
	printf("\n15-->Holo Daimond");
	printf("\n16-->exit");
	printf("\nEnter the chocie=");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:clrscr();
		       for(i=1;i<=size;i++)
		       {
				for(j=1;j<=i;j++)
				{
					printf("*");
				}
				printf("\n");
		       }
		       getch();
		break;//case1

		case 2: clrscr();
			for(i=size;i>=1;i--)
		       {
				for(j=1;j<=i;j++)
				{
					printf("*");
				}
				printf("\n");
		       }
		       getch();
		break;//case 2
		case 3: clrscr();
			for(i=1;i<=size;i++)
		       {
				for(k=(size-i);k>=1;k--)
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
		break;//case 3
		case 4: clrscr();
			for(i=size;i>=1;i--)
		       {
				for(k=(size-i);k>=1;k--)
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
		break;//case 4
		case 5: clrscr();
			for(i=1;i<=size;i++)
		       {
				for(k=(size-i);k>=1;k--)
				{
					printf(" ");
				}
				for(j=1;j<=i;j++)
				{
					printf("* ");
				}
				printf("\n");
		       }
		       for(i=size-1;i>=1;i--)
		       {
				for(k=(size-i);k>=1;k--)
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
		break;//case 5
		case 6: clrscr();
			for(i=1;i<=size-2;i++)
		       {
				for(j=1;j<=size;j++)
				{
				    printf("*");
				}//end of inner for
				printf("\n");
		       }//end of outer for
		       getch();
		break;//case 6
		case 7: clrscr();
			for(i=1;i<=size-2;i++)
		       {
				for(j=1;j<=size+3;j++)
				{
				      printf("*");
				}//end of inner for
				printf("\n");
		       }//end of outer for
		       getch();
		break;//case 7
		case 8: clrscr();
			for(i=1;i<=size;i++)
			{
				for(j=1;j<=size;j++)
				{
					if(i>1 && i<size && j>1 && j<size)
					{
						printf("  ");
					}else
					{
						printf("* ");
					}//end of if- else
				}//end of inner for
				printf("\n");
			}//end of outer for
		       getch();
		break;//case 8
		case 9: clrscr();
			for(i=size;i>=1;i--)
		       {
				for(k=(size-i);k>=1;k--)
				{
					printf(" ");
				}
				for(j=1;j<=i;j++)
				{
					printf("* ");
				}
				printf("\n");
		       }
		       for(i=2;i<=size;i++)
		       {
				for(k=(size-i);k>=1;k--)
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
		break;//case 9
		case 10:clrscr();
			for(i=1;i<=5;i++)
			{
				for(k=(5-i);k>=1;k--)
				{
					printf(" ");
				}
				for(j=1;j<=i;)
				{
					no=l;
					flag=1;
					for(m=2;m<no;m++)
					{
					if(no%m==0)
					{
						flag=0;
						break;

					}
					}
					if(flag)
					{
						printf("%d ",no);
						j++;
					}
					l++;

					}
					printf("\n");
				}
				for(i=4;i>=1;i--)
				{
					for(k=(5-i);k>=1;k--)
					{
						printf(" ");
					}
					for(j=1;j<=i;)
					{
						no=l;
						flag=1;
						for(m=2;m<no;m++)
						{
						if(no%m==0)
						{
							flag=0;
							break;

						}
						}
						if(flag)
						{
							printf("%d ",no);
							j++;
						}
						l++;

					}
					printf("\n");
				}
		      getch();
		break;//case 10
		case 11:clrscr();
			for(i=1;i<=size;i++)
			{
				for(k=(size-i);k>=1;k--)
				{
					printf(" ");
				}//end of inner for 1
				for(j=1;j<=i;j++)
				{
					printf("%d ",num);
					num+=2;
				}//end pof inner for 2
				printf("\n");

			}//end of outer for
			for(i=size-1;i>=1;i--)
			{
				for(k=(size-i);k>=1;k--)
				{
					printf(" ");
				}//end of inner for 1
				for(j=1;j<=i;j++)
				{
					printf("%d ",num);
					num+=2;
				}//end pof inner for 2
				printf("\n");

			}//end of outer for
			getch();
		break;//case 11
		case 12:clrscr();
			for(i=1;i<=size;i++)
			{
				for(k=(size-i);k>=1;k--)
				{
					printf(" ");
				}
				for(j=1;j<=size-2;j++)
				{
					printf("* ");
				}
				printf("\n");
		       }
		       for(i=size-1;i>=1;i--)
		       {
				for(k=(size-i);k>=1;k--)
				{
					printf(" ");
				}
				for(j=1;j<=size-2;j++)
				{
					printf("* ");
				}
				printf("\n");
		       }
		      getch();
		break;//case 12
		case 13:clrscr();
			for(i=size;i>=1;i--)
		       {
				for(k=(size-i);k>=1;k--)
				{
					printf(" ");
				}
				for(j=1;j<=size-2;j++)
				{
					printf("* ");
				}
				printf("\n");
		       }
		       for(i=1;i<=size;i++)
		       {
				for(k=(size-i);k>=1;k--)
				{
					printf(" ");
				}
				for(j=1;j<=size-2;j++)
				{
					printf("* ");
				}
				printf("\n");
		       }
		      getch();
		break;//case 13
		case 14:clrscr();
			for(i=0;i<=step;i++)
			{
				for(j=0;j<=i*2;j++)
				{
					printf("* ");
				}//end of inner for
			printf("\n");
			}//end of outer for
			getch();
		break;//case 14
		case 15:clrscr();
			printf("\n************\n");
			for(i=1;i<=5;i++)
			{

			for(j=5;j>=i;j--)
			{
				printf("*");

			}//end of inner for
			for(k=1;k<=i;k++)
			{
				printf("  ");
			}//end of inner for
			for(j=5;j>=i;j--)
			{
				printf("*");

			}//end of inner for

			printf("\n");
			}//end of for
			for(i=5;i>=1;i--)
			{

			for(j=5;j>=i;j--)
			{
			printf("*");

			}//end of inner for
			for(k=1;k<=i;k++)
			{
			printf("  ");
			}//end of inner for
			for(j=5;j>=i;j--)
			{
			printf("*");

			}//end of inner for

			printf("\n");
			}//end of for
			printf("************");


			getch();
		break;//case 15
		case 16:exit(0);


	}//end of switch


getch();
}//EMD OF WHILE
}//end of main
/******************************** made by rushil chauhan ****************************************************************************************************/