#include<stdio.h>
#include<conio.h>
#include<time.h>
int main(){
	time_t tm;
	time(&tm);
	clrscr();
	printf("\ncurrent date/time = %s",ctime(&tm));
	getch();

	return 0;
	}