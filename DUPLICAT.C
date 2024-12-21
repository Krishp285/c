#include<stdio.h>
#include<conio.h>
void main(){
	int arr[100],size;
	int i,j,count=0;
	clrscr();
	printf("\nEnter the size of array");
			scanf("%d",&size);
	for(i=0;i<size;i++)
		{
			printf("\nEnter the values you want arr[%d] = ",i);
			scanf("%d",&arr[i]);
		}
		printf("\nthe element of array are ");
		for(i=0;i<size;i++){
			printf("\n%d",arr[i]);
		      }
	for(i=0;i<size;i++)
		{
		for(j=i+1;j<size;j++)
			{
		if (arr[i]==arr[j])
			{
			  count++;
			}

			}
		}
	printf("\nthe duplicate array = %d",count);
	getch();
	}