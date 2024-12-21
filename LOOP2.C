#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	clrscr();
	gotoxy(40,5);
	for(i=1;i<=50;i++){
		gotoxy(40,i);
		sound(i*100);
		delay(i*10);
		nosound();
		textcolor(i);
		cprintf("%d",i);
		}
		getch();
		}