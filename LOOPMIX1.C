#include<stdio.h>
#include<conio.h>
void main(){
	int ans,i,j,k,no,choice,dup,rev,temp,no1,count,sum;
	while(1) {
	clrscr();
	printf("\n1 for fibonacci series");
	printf("\n2 for factorial ");
	printf("\n3 for reverse number");
	printf("\n4 for odd nunber two number ");
	printf("\n5 for count of digits of number ");
	printf("\n6 for to print sum of number");
	printf("\n7 for exit");
	printf("\nenter the choice :- ");
	scanf("%d",&choice);
	switch(choice){//start of switch case

	       case 1:k=0,j=1,i=1;
		      printf("\nenter the number:-  ");
		      scanf("%d",&no);
		      printf("%d\t%d",k,j);
		      while(i<=no)
		      {
			ans=k+j;
			printf("\t%d",ans);
			k=j;
			j=ans;
			i++;

		      }
		      break;

	       case 2: ans=1,k=1;
		       printf("\nenter the number to print factorial ");
		      scanf("%d",&no);
		      for(i=1;i<=no;i++)
		      {
			ans=ans*k;
			k++;
		      }
		      printf("\nthe factorial of %d is %d",no,ans);
		      break;

	       case 3:
		      printf("\nenter the number ");
		      scanf("%d",&no);//123
		      dup=no;
		      i=1,rev=0;
		      while(no>0)
		      {
			 temp=no%10;
			 rev=(rev*10)+temp;
			 no=no/10;
		      }

		      printf("\nthe reverse number is %d",rev);
		      break;

		case 4:printf("\nenter the starting point :-");
		       scanf("%d",&no);
		       printf("\nenter the ending point :-");
		       scanf("%d",&no1);
		       for(i=no;i<no1;i++)
		       {
				if(i%2!=0)
				{
				printf("\t%d",i);
				}
		       }
		       break;

		case 5: count=0;
			printf("\nenter the number ");
		       scanf("%d",&no);
		       dup=no;
		       i=1,rev=0;
		      while(no>0)
		      {
			 temp=no%10;
			 no=no/10;
			 count++;
		      }
		       printf("\nthe total digits of number %d are %d",dup,count);
		      break;
		case 6: printf("\nenter the number :-");
			scanf("%d",&no);
			i=1,sum=0,temp=0;
			dup=no;
			while(no>0)
			{
				temp=no%10;
				sum=sum + temp;
				no=no/10;
			}
			printf("\nThe sum of %d is %d",dup,sum);
			break;
		case 7:exit(0);
		       break;
	}//end of switch case
	getch();
	}
	}