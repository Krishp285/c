#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main(){
		int i,j;
		char a[SIZE];
		clrscr();
		for(i=1;i<=SIZE;i++)
		{
			printf("\nenter the number a[%d]",i);
			scanf("%d",&a[i]);
		}
		for(i=1;i<=SIZE;i++)
		{

			printf("\n%d",a[i]);
		}
		printf("\nthe reverse array is :-");
		for(i=a[SIZE];i>=1;i--)
		{
			printf("\nthe reverse of a[%d] is %d",i,a[i]);

		}
		getch();

}