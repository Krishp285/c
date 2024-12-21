#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main(){
	int a[SIZE];
	int i,j,c,d,m;
	int choice;
	char b[SIZE],k,l;
	while(1){
	clrscr();
	printf("\n1-->integer");
	printf("\n2-->character");
	printf("\n3-->exit");
	printf("\nenter the choice ");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		for(i=0;i<SIZE;i++){
	printf("\nenter the value of array a[%d]",i);
	scanf("%d",&a[i]);
	}
	printf("\nthe unsorted array is \n");
	for(i=0;i<SIZE;i++){
	printf("%d\t",a[i]);
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
	printf("%d\t",a[i]);
	}
	       break;
		case 2:
		for(k=0;k<SIZE;k++){
	printf("\nenter the value of array a[%d]",k);
	scanf(" %c",&b[k]);
	}
	printf("\nthe unsorted array is \n");
	for(k=0;k<SIZE;k++){
	printf("%c\t",b[k]);
	}
	for(k=0;k<SIZE;k++){
		for(l=0;l<SIZE-1;l++){
			if(b[l]>b[l+1]){
				m=b[l];
				b[l]=b[l+1];
				b[l+1]=m;
					}
				     }
		}
		printf("\nthe sorted array is \n");
		for(k=0;k<SIZE;k++){
	printf("%c\t",b[k]);
	}
	break;
	case 3: exit(0);
	}
	getch();
		 }
	}
