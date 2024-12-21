#include<stdio.h>
#include<conio.h>
void main(){
	int merge[100],arr[100],arr2[100],arr3[100],size,size2;
	int i,j,c,k;
	clrscr();
	printf("\nEnter the size of array");
			scanf("%d",&size);
	printf("\nEnter the size of array");
			scanf("%d",&size2);
	for(i=0;i<size;i++)
		{
			printf("\nEnter the values you want arr[%d] = ",i);
			scanf("%d",&arr[i]);
		}
		printf("\nthe element of array are ");
	for(i=0;i<size;i++){
			printf("\n%d",arr[i]);
		      }
		      for(i=0;i<size2;i++)
		{
			printf("\nEnter the values you want arr[%d] = ",i);
			scanf("%d",&arr[i]);
		}
		printf("\nthe element of array are ");
		for(i=0;i<size2;i++){
			printf("\n%d",arr[i]);
		      }


		for(i=0;i<size;i++){
		for(j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				c=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=c;
					}
				     }
		}
		printf("\nthe sorted array is \n");
		for(i=0;i<size;i++){
	printf("%d\t",arr[i]);
	}

	for(i=0;i<size2;i++){
		for(j=0;j<size2-1;j++){
			if(arr[j]>arr[j+1]){
				c=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=c;
					}
				     }
		}
		printf("\nthe sorted array is \n");
		for(i=0;i<size2;i++){
	printf("%d\t",arr[i]);
	}

	for(i=0;i<size;i++)
	{
	scanf("%d",&arr2[i]);
	arr2[i]=merge[i];
	}
	k=i;
	for(i=0;i<size2;i++)
	{
	scanf("%d",&arr3[i]);
	arr2[i]=merge[k];
	k++;
	}

	getch();
	}