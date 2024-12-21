#include<stdio.h>
#include<conio.h>
void main(){
	int ans,i,no=1,f=0;
	clrscr();
	printf("%d\t%d",f,no);
	for(i=1;i<=15;i++)
	{
	ans=f+no;    //0+1
	 printf("%d\t",ans);  //0 1 1
	f=no;
	no=ans;
	}
	getch();
	}