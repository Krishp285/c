#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,j;
	clrscr();
	printf("Enter the no=");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){


		    printf("%d",j);
		    }
		    printf("\n");
		    }
		    getch();
}