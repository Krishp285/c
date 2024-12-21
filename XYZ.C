#include<stdio.h>
#include<conio.h>
void main(){
	int i,j;
	char ch='A';
	clrscr();
	gotoxy(40,5);
	for(j=1;j<=25;j++)
	for(i=1;i<=80;i++){
		gotoxy(i*1,j);
		sound(i*10*j);
		delay(2);
		nosound();
		textcolor(i);
		cprintf("%c",ch+i);
		}
		getch();
		}