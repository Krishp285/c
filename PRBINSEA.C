#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main(){
	    int i,a[SIZE],index=-1,min=0,mid,max=SIZE-1,key;
	    clrscr();
	    for(i=0;i<SIZE;i++)
	    {
	    printf("\nenter the a[%d] number ",i);
	    scanf("%d",&a[i]);
	    }
	    printf("\nenter the key :-");
	    scanf("%d",&key);
	    while(min<=max)
	    {
		mid=(min+max)/2;
		if(key==mid)
		{
		   index=mid;
		   break;
		 }
		 else if(key>a[mid])
		 {
		   min=mid+1;
		 }
		 else
		 {
		 max=mid-1;
		 }

	    }
	    if(index!=-1)
	    {
	    printf("\n%d key is found at %d index",key,index);
	    }
	    else{
	    printf("\n%d key is found at %d index",key,index);
	    }
	    getch();
	    }