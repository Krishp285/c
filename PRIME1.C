#include<stdio.h>
#include<conio.h>
void prime();

void main(){
	clrscr();
	prime();
	getch();
	}
void prime() {
    int num1,i,c;
    clrscr();
    printf("\nEnter the number = ");
    scanf("%d",&num1);
    if(num1%2){
    printf("\nthe number is prime");
    }
    else{
    printf("\nthe number is composite");
	}
      }
