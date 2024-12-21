//candy game
/*
				author:-krish patel
				doc:-23 may 2023
				objective:-to prepare candy game
				#       #
				#########

*/
#include<stdio.h>//# preprocessor include---> directive
#include<conio.h>
void main(){//body(definition) of the function
	int candyX=40,candyY=2,boxX=40,boxY=22;
	char ch;
	textbackground(BLACK);
	start:
	clrscr();
	gotoxy(candyX,candyY);
	textcolor(YELLOW);
	cprintf("o");
	gotoxy(boxX,boxY);
	cprintf("#");
	gotoxy(boxX+7,boxY);
	cprintf("#");
	gotoxy(boxX,boxY+1);
	cprintf("########");
	if(kbhit()){
		ch=getch();
		switch(ch){
		case 'a':boxX--;
			break;
		case 'A':boxX--;
			break;
		case 'd':boxX++;
			break;
		case 'D':boxX++;
			break;
		case 'x' :exit(0);
		case 'X' :exit(0);
		}//end of switch
	}//end of if
	candyY++;
	if(candyY==22){
			candyY=2;
	}
	delay(200);
	goto start;


	}//end of main
