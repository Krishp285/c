#include<stdio.h>
#include<conio.h>
#define SIZE 7
void main(){
	char a[SIZE];
	int i,j,c;
	clrscr();
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of array a[%d]",i);
	scanf(" %c",&a[i]);
	}
	printf("\nthe unsorted array is \n");
	for(i=0;i<SIZE;i++){
	printf(" %c\t",a[i]);
	}
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE-1;j++){
			if(a[j]>a[j+1]){
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
					}
				     }
		}
		printf("\nthe sorted array is \n");
		for(i=0;i<SIZE;i++){
	printf(" %c\t",a[i]);
	}
	getch();

	}
