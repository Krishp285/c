/*
		 Author:Krish patel
		 DOC:06-06-2023
		 Objective: print 10 int,float,char or double using double
*/
#include<stdio.h>
#include<conio.h>
#define ROW 2
#define COL 2
void main (){
	int a[ROW][COL];
	int i,j,choice;
	float b[ROW][COL];
	char  c[ROW][COL];
	double d[ROW][COL];
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
	cprintf("select choice = ");
	scanf("%d",&choice);
		switch(choice){
		case 1:
			gotoxy(40,11);
			for(i=0;i<ROW;i++){
				for(j=0;j<COL;j++){
				printf("\nenter the value of a[i][j]",i,j);
				scanf("%d",&a[i][j]);
				}
			}
			for(i=0;i<ROW;i++){
				for(j=0;j<COL;j++){
				printf("%d",a[i][j]);
				}
				printf("\n");
			}

		break;
		case 2: gotoxy(40,13);
			for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("\nenter the value of b[i][j]",i,j);
		scanf("%f",&b[i][j]);
		}
		}
			for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("%f",b[i][j]);
		}
		printf("\n");
		}
		break;
		case 3:
			gotoxy(40,15);
			for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("\nenter the value of c[i][j]",i,j);
		scanf(" %c",&c[i][j]);
		}
		}
			for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf(" %c",c[i][j]);
		}
		printf("\n");
		}
		break;
		case 4:
			gotoxy(40,17);
			for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("\nenter the value of d[i][j]",i,j);
		scanf("%lf",&d[i][j]);
		}
		}
			for(i=0;i<ROW;i++){
	for(j=0;j<COL;j++){
		printf("%lf",d[i][j]);
		}
		printf("\n");
		}
		break;
		case 5:exit(0);
		default:printf("\ninvalid choicee");
		}

	getch();
}
}
