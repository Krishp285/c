#include<stdio.h>
#include<conio.h>
void main(){
	int a[5]= {11,12,13,14,15};
	int i,key,index,min=0,max=4,mid=0;
	clrscr();
	printf("\nenter index :-");
	scanf("%d",&key);
	while(min<=max)
	{
			mid=(min+max)/2;
		if(a[mid]==key)
		{
			index=a[mid];
			break;
		}
		else
		{
			if(key<a[mid])
			{
			max=mid-1;
			}
			else
			{
			min=mid+1;
			}
		}
	}

			if(index == key){
				printf("\nelement  found");
			}
			else
			{
				printf("\nelement not found ");
			}
				getch();
	}
