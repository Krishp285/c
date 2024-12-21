/*
		author:-krish patel
		doc:-23 may 2023
		objective:-to prepare 2 candy game
		#    #
		######
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int candyX=18,candyY=3,boxX=18,boxY=23,candy2X=58,candy2Y=3,box2X=58,box2Y=23;

	char ch;
	textbackground(GREEN) ;
	start:
	clrscr();
	gotoxy(candyX,candyY);
	textcolor(BLUE);
	cprintf("0");
	gotoxy(candy2X,candy2Y);
	textcolor(MAGENTA);
	cprintf("0");
	gotoxy(boxX,boxY);
	textcolor(BLACK);
	cprintf("#");
	gotoxy(box2X,box2Y);
	textcolor(BROWN);
	cprintf("#");
	gotoxy(boxX+5,boxY);
	textcolor(BLACK);
	cprintf("#");
	gotoxy(box2X+5,box2Y);
	textcolor(BROWN);
	cprintf("#");
	gotoxy(boxX,boxY+1);
	textcolor(BLACK);
	cprintf("######");
	 gotoxy(box2X,box2Y+1);
	 textcolor(BROWN);
	 cprintf("######");
	if(kbhit()){
		ch=getch();
		switch(ch){
		case'u':boxX--;
			break;
		case'U':boxX--;
			break;
		case'i':boxX++;
			break;
		case'I':boxX++;
		case'J':box2X--;
			break;
		case'j':box2X--;
			break;
		case'K':box2X++;
			break;
		case'k':box2X++;
			break;
		case'X':exit(0);
		case'x':exit(0);
			}
	}
	candyY++, candy2Y++;
	if(candyY==24){
		candyY=3;
		if(candy2Y==24){
		candy2Y=3;
		}
	}
	delay(100);
	goto start;
	}