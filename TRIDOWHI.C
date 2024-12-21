#include<stdio.h>
#include<conio.h>
void main(){
	int i=2,j=2,k=1,n;
	clrscr();
	do{

		do{
		   i=2;
			do{
				j=2;
				do{
				printf("\t");
				printf("*");
				j++;
				}while(j<=i);
				printf("\t");
				printf("\n");
				i++;
			}while(i<=5);
			gotoxy(15,1);
			printf("\n");
			k++;
		}while(k<=3);


		printf("\t");
		n++;
	       } while(n<=3);


	getch();
	}