/*			author=krish patel
			doc=1 june 2023
			objective=to create abcd using while loop
*/
#include<stdio.h>
#include<conio.h>
void main(){
	char ch='A';
	int i=0;
	textbackground(GREEN);
	textcolor(BLUE);
	clrscr();

	gotoxy(40,13);

	while(i<=25){
	printf("\t%c",ch+i);
	i++;
	}
	getch();
	}