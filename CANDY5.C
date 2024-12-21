/*
			author:-krish patel
			doc:-24 may 2023
			objective :-full candy game
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int candyX=40,candyY=3,boxX=40,boxY=23,score=0,lifeline=3,d=0;
	char ch;
	textbackground(BLUE);
	start:
	clrscr();
	gotoxy(60,5);
	cprintf("score = %d" , score);
	gotoxy(60,6);
	cprintf("lifeline = %d" , lifeline);
	gotoxy(candyX,candyY);
	textcolor(RED);
	cprintf("0");
	gotoxy(boxX,boxY);
	textcolor(YELLOW);
	cprintf("#");
	gotoxy(boxX+5,boxY);
	textcolor(YELLOW);
	cprintf("#");
	gotoxy(boxX,boxY+1);
	textcolor(YELLOW);
	cprintf("######");
	if(kbhit()){
		ch=getch();
		switch(ch){
		case'b': if(boxX>1){
				boxX--;
				}
			break;
		case'B': if(boxX>1){
				boxX--;
				}
			break;
		case'N': if(boxX<73){
				boxX++;
				}
			break;
		case'n': if(boxX<73){
				boxX++;
				}
			break;
		case'x': exit(0);
		case'X': exit(0);
		}
	}
	candyY++;
	if(candyY==23){
		d=candyX-boxX;
		if(d>1 && d<=6){
			score++;
	sound(3000);
	delay(20);
	nosound();
	}

	else {
	lifeline--;
	sound(2000);
	delay(20);
	nosound();
				if(lifeline==0){
				clrscr();
				gotoxy(40,13);
				textcolor(RED);
				cprintf("GAME IS OVER");
				sound(1000);
				delay(200);
				nosound();
				getch();
				exit(0);
			}
		}candyY=2;
		candyX=rand()%80+1;

		}
		delay(200);
		goto start;
		}