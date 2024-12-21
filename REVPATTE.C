#include<stdio.h>
#include<conio.h>
void main(){
	int no,i,j;
	clrscr();
	printf("Enter the no=");
	scanf("%d",&no);
	for(i=no;i>=1;i--){
		for(j=i;j>=1;j--){


		    printf("%d",j);
		    }
		    printf("\n");
		    }
		    getch();
}