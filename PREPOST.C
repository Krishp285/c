/*                            author:-krish patel
				doc:-26 may 2023
				objective:-to create pre and post increment
*/
#include<stdio.h>
#include<conio.h>
void main(){
	int a=66,b=88,c=99,d,e;
	clrscr();
	d=++a + ++a + ++a + ++a + a++ +  a++ + ++b + b++ + c++ + a + b + c;
	e=++a + a++ + ++a + b++ + ++b  + ++c + c++;
	printf("%d%d%d%d%d%d%d",++a
	);

	getch();
	}