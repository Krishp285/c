#include<stdio.h>
#include<conio.h>
void main(){
	int rollno[7];
	int i;
	clrscr();
	for(i=0;i<7;i++){
		printf("\nenter the value of array rollno[%d]",i);
		scanf("%d",&rollno[i]);
		}
	for(i=0;i<7;i++){
		printf("\n%d",rollno[i]);
		}
		getch();
		}