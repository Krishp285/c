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
	int candyX=18,candyY=3,boxX=18,boxY=23;

	char ch;
	textbackground(GREEN) ;
	start:
	clrscr();
	gotoxy(candyX,candyY);
	textcolor(BLUE);
	cprintf("0");
	gotoxy(candyX+40,candyY);
	textcolor(MAGENTA);
	cprintf("0");
	gotoxy(boxX,boxY);
	textcolor(BLACK);
	cprintf("#");
	gotoxy(boxX+40,boxY);
	textcolor(BROWN);
	cprintf("#");
	gotoxy(boxX+5,boxY);
	textcolor(BLACK);
	cprintf("#");
	gotoxy(boxX+45,boxY);
	textcolor(BROWN);
	cprintf("#");
	gotoxy(boxX,boxY+1);
	textcolor(BLACK);
	cprintf("######");
	 gotoxy(boxX+40,boxY+1);
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
			break;
		case'X':exit(0);
		case'x':exit(0);
			}
	}
	candyY++;
	if(candyY==24){
		candyY=3;
	}
	delay(100);
	goto start;
	}