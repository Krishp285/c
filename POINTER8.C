#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main(){
	int i,j,c;
	char a[10];
	char *y;
	clrscr();
	for(i=0;i<SIZE;i++){
	printf("\nenter the value ");
	scanf(" %c",&a[i]);

	} y=a;
	printf("\nthe unsorted array is");
	for(i=0;i<SIZE;i++){
	printf("%c\t",a[i]);
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
	printf("%c\t",a[i]);
	}
	for(i=0;i<SIZE;i++){
		printf("\nthe value is %c and address is %u",*(y+i),y+i);
	}


	getch();
	}