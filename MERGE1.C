#include<stdio.h>
#include<conio.h>
void main(){
	int arr1[100],arr2[100],arr3[200];
	int i,j,k,s1,s2,s3;
	clrscr();
	printf("\nenter the size of array 1 ");
	scanf("%d",&s1);
	for(i=0;i<s1;i++){
		printf("\nenter the element in  arr[%d]",i);
		scanf("%d",&arr1[i]);
			  }
	for(i=0;i<s1;i++){
		printf("%d",arr1[i]);
			  }
	printf("\nenter the size of array 2 ");
	scanf("%d",&s2);
		for(i=0;i<s2;i++){
		printf("\nenter the element in  arr[%d]",i);
		scanf("%d",&arr2[i]);
			  }
	for(i=0;i<s2;i++){
		printf("%d",arr2[i]);
			  }
	printf("\nthe merged array is");
	for(i=0;i<s1;i++){
			arr3[i]=arr1[i];
			}
	for(j=0;j<s2;j++){
			arr3[i]=arr2[j];
			j++;
			}
	for(i=0;i<s3;i++)
	{
	for(k=0;k<s3-1;k++)
	{
	if(arr3[k]<=arr3[k+1])
	{
		j=arr3[k+1];
		arr3[k+1]=arr3[k];
		arr3[k]=j;
		}
		}
		}
		for(i=0;i<s3;i++)
		{
		 printf("\n%d",arr3[i]);
		 }
		 printf("\n");
		 getch();
		 }
