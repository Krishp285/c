#include<stdio.h>
#include<conio.h>
void main(){
	int i,num,min=32767,max=0,avg,sum=0,count=0;
	clrscr();
	printf("\nenter the positive  number to continue -1 to terminate ");
	printf("\nenter the number \n");
	while(scanf("%d",&num) && num!=-1)
	{
		if(num>0)
		{       sum=sum+num;
			count++;
			if(max<num)
			{
			  max=num;
			}
			if(min>num)
			{
			 min=num;
			}
		}
		else
		{
			printf("\nyou enterd negative number try again");
		}
			avg=sum/count;
			printf("\nthe sum is %d",sum);
			printf("\nthe avg is %d",avg);
	}
	getch();
	}