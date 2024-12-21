#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main(){
	    int no,i;
	    char a[SIZE],shift;
	    clrscr();
	    for(i=1;i<=SIZE;i++){
	    printf("\nenter the number a[%d]",i);
	    scanf("%d",&a[i]);
	    }
	    printf("\nenter the number of shift");
	    scanf("%d",&shift);
	    for(i=1;i<=SIZE;i++)
	    {
	     printf("\n%d",a[i]);
	    }
	    getch();
	    }