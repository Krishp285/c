#include<stdio.h>
#include<conio.h>
void main(){
		int i,start,end,count=0,j;
		clrscr();
		printf("\nenter the starting  number");
		scanf("%d",&start);
		printf("\nenter the ending  number");
		scanf("%d",&end);
		for(i=start;i<=end;i++){
		count=0;
		for(j=2;j<i;j++){
		if(i%j==0){
			count++;
			break;
			}
			}
			if(count==0){
			 printf("\n%d",i);
			}

			}
		getch();
	   }