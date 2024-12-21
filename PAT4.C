#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,l=2,m,no,flag;
	clrscr();
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
			printf("%d",no);
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
			printf("%d",no);
			j++;

		  }
		  l++;
		  }

		printf("\n");
	}

	getch();
	}