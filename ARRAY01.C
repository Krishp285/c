/*
		 Author:Krish patel
		 DOC:06-06-2023
		 Objective: print 10 int,float,char or double using double
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main (){
	int a[SIZE];
	int i,choice;
	float b[SIZE];
	char  c[SIZE];
	double d[SIZE];
	sound(200);
	delay(500);
	nosound();
	textbackground(WHITE);
	while(1){
	clrscr();
	textcolor(BLUE);
	gotoxy(40,5);
	cprintf("1 for int");
	textcolor(YELLOW);
	gotoxy(40,6);
	cprintf("2 for float");
	textcolor(CYAN);
	gotoxy(40,7);
	cprintf("3 for char");
	textcolor(RED);
	gotoxy(40,8);
	cprintf("4 for double");
	textcolor(BROWN);
	gotoxy(40,9);
	cprintf("5 for exit");
	gotoxy(40,10);
	cprintf("select choice");
	scanf("%d",&choice);
		switch(choice){
		case 1:
			gotoxy(40,11);
			for(i=0;i<SIZE;i++){
			printf("\nEnter the values you want[%d]",i);
			scanf("%d",&a[i]);
		}
		gotoxy(40,12);
		printf("the array is");
		for(i=0;i<SIZE;i++){
			printf("%d",a[i]);
			}
			printf("the reverse array is");
		for(i=0;SIZE<1;i++){
			printf("%lf",d[i]);
			}
		break;
		case 2:
			gotoxy(40,13);
			for(i=0;i<SIZE;i++){
			printf("\nEnter the values you want[%d]",i);
			scanf("%f",&b[i]);
		}
		gotoxy(40,14);
		printf("the array is");
		for(i=0;i<SIZE;i++){
			printf("\n%f",b[i]);
			}
		break;
		case 3:
			gotoxy(40,15);
			for(i=0;i<SIZE;i++){
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













