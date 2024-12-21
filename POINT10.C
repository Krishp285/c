#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main(){
	int i,j,c;
	char a[10];
	int key,index;
	char *y;
	clrscr();
	for(i=0;i<SIZE;i++){
	printf("\nenter the value ");
	scanf(" %c",&a[i]);

	} y=a;
	printf("\nthe array is as follows\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%c\t",a[i]);
	}
	printf("\nenter the key value");
	scanf("%d",&key);
	for(i=0;i<SIZE;i++)
	{
		if(key==a[i])
			{
			 index=1;
			 break;
			}
	}
	if(index==-1)
	{
	 printf("\nsearch unsuccessful");
	}
	else
	{
	printf("\nthe key %d is at %c place",key,index+1);
	}
	getch();
	}