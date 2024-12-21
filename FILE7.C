#include<stdio.h>
#include<conio.h>
struct student{
	int sid;
	char name[30];
	}s1;
void main(){
	struct student temp;
	FILE *fp;
	clrscr