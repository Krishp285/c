#include<stdio.h>
#include<conio.h>
#define SIZE 5

void main(){
	int a[SIZE],i,key,index=-1,choice;
	clrscr();
	for(i=0;i<SIZE;i++){
	printf("\nenter the a[%d] number ",i);
	scanf("%d",&a[i]);
	}

	printf("\nenter the key :-");
	scanf("%d",&key);
	for(i=0;i<SIZE;i++)
	{
		if(key==a[i])
		{
			index=i;
			break;
		}
	}
	if(index==-1)
	{
	printf("\n%d key is not found",key);
	}
	else
	{
	printf("\n%d key is found at %d index %d place",key,index,index+1);
	}
	getch();
	}