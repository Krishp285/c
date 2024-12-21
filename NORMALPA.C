#include<stdio.h>
#include<conio.h>
void main(){
	int no,i,j;
	clrscr();
	printf("Enter the no=");
	scanf("%d",&no);
	for(i=1;i<=no;i++){
		for(j=1;j<=i;j++){

		    printf("%d",i);
		    }
		    printf("\n");
		    }
		    getch();
}