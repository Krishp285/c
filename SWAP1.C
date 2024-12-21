
#include<stdio.h>
#include<conio.h>
void swap();

void main(){
	clrscr();
	swap();
	getch();
	}
void swap() {
    int num1,num2,num3;
    clrscr();
    printf("\nEnter your first choice = ");
    scanf("%d",&num1);
    printf("\nEnter your second choice = ");
    scanf("%d",&num2);
    printf("\nFirst choice before swapping is = %d",num1);
    printf("\nSecond choice before swapping is = %d",num2);
    num3=num1;
    num1=num2;
    num2=num3;
     printf("\nFirst choice after swapping is = %d",num1);
     printf("\nSecond choice after swapping is = %d",num2);
     }