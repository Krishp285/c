#include<stdio.h>
#include<conio.h>
#define SIZE 7
void main(){
	int a[SIZE],i,b[SIZE],c[SIZE],choice;
	while(1){
	clrscr();
	printf("\n1 for addition");
	printf("\n2 for subtraction");
	printf("\n3 for multiplication");
	printf("\n4 for division");
	printf("\n5 for exit");
	printf("\nenter the choice :-");
	scanf("%d",&choice);
	switch(choice){
	case 1:
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of a[%d]",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of b[%d]",i);
	scanf("%d",&b[i]);
	}
	for(i=0;i<SIZE;i++){
	c[i]=a[i]+b[i];
	}
	for(i=0;i<SIZE;i++){
	printf("\n%d + %d =%d",a[i],b[i],c[i]);
	}
	break;
	case 2:
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of a[%d]",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of b[%d]",i);
	scanf("%d",&b[i]);
	}
	for(i=0;i<SIZE;i++){
	c[i]=a[i]-b[i];
	}
	for(i=0;i<SIZE;i++){
	printf("\n%d - %d =%d",a[i],b[i],c[i]);
	}
	break;
	case 3:
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of a[%d]",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of b[%d]",i);
	scanf("%d",&b[i]);
	}
	for(i=0;i<SIZE;i++){
	c[i]=a[i]*b[i];
	}
	for(i=0;i<SIZE;i++){
	printf("\n%d * %d =%d",a[i],b[i],c[i]);
	}
	break;
	case 4:
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of a[%d]",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE;i++){
	printf("\nenter the value of b[%d]",i);
	scanf("%d",&b[i]);
	}
	for(i=0;i<SIZE;i++){
	c[i]=a[i]/b[i];
	}
	for(i=0;i<SIZE;i++){
	printf("\n%d / %d =%d",a[i],b[i],c[i]);
	}
	break;
	case 5: exit(0);
	}
	getch();
	}
	}