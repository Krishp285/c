/*
		 Author:Krish patel
		 DOC:06-06-2023
		 Objective: print 10 int,float,char or double using double
*/
#include<stdio.h>
#include<conio.h>
#define SIZE N1
void main (){
	int a[N1];
	int i,choice;
	int N1;
	float b[N1];
	char  c[N1];
	double d[N1];
	textbackground(RED);
	while(1){
	clrscr();
	printf("\n1 for int");
	printf("\n2 for float");
	printf("\n3 for char");
	printf("\n4 for double");
	printf("\n5 for exit");
	printf("\nselect choice");
	printf("\nenter the number of array");
	scanf("%d",&N1);
	scanf("%d",&choice);
		switch(choice){
		case 1:
			gotoxy(40,11);
			for(i=0;i<N1;i++){
			printf("\nEnter the values you want[%d]",i);
			scanf("%d",&a[i]);
		}
		gotoxy(40,12);
		printf("the array is");
		for(i=0;i<N1;i++){
			printf("%d",a[i]);
			}
		break;
		case 2:
			for(i=0;i<N1;i++){
			printf("\nEnter the values you want[%d]",i);
			scanf("%f",&b[i]);
		}
		gotoxy(40,14);
		printf("the array is");
		for(i=0;i<N1;i++){
			printf("\n%f",b[i]);
			}
		break;
		case 3:

			for(i=0;i<N2;i++){
			printf("\nEnter the values you want[%d]",i);
			scanf(" %c",&c[i]);
			}
			gotoxy(40,16);
		printf("the array is");
		for(i=0;i<SIZE;i++){
			printf(" %c",c[i]);
			}
		break;
		case 4:
			gotoxy(40,17);
			for(i=0;i<SIZE;i++){
			printf("\nEnter the values you want[%d]",i);
			scanf(" %lf",&d[i]);
		}
			gotoxy(40,18);
		printf("the array is");
		for(i=0;i<SIZE;i++){
			printf("%lf",d[i]);
			}
		break;
		case 5:exit(0);
		default:printf("\ninvalid choicee");
		}

	getch();
}
}