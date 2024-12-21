#include<stdio.h>
#include<conio.h>
void main(){
	int no1,i,ans;
	clrscr();
	printf("\nenter the value");
	scanf("%d",&no1); //12
	for(i=no1;i>0;i--)
	{
	     ans=no1%10;
	     printf("%d",ans);
	     no1=no1/10;
	}
	getch();
}