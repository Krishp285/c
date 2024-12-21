#include<stdio.h>
#include<conio.h>
void main(){
	int choice,i,choice2,choice3,k,n,j,ch;
	clrscr();
	printf("\n1 horizontal triangle-->");
	printf("\n2 vertical triangle-->");
	printf("\nselect the choice-->");
	scanf("%d",&choice);
	switch(choice){
			case 1:
				printf("\n1 normal triangle");
				printf("\n2 reverse triangle");
				printf("\n enter the choice2");
				scanf("%d",&choice2);
				switch(choice){
					case 1:
	while(k<=3){
	i=1;
	while(i<=n){
	j=1;
		   while(j<=i){
		   printf("%c",ch);
		   j++;
		   }
		   i++;
		   printf("\n");
		   }
		   k++;
		   printf("\n");
		   }
		   getch();
		   }


	}
		case 2:
				printf("\n1 normal triangle");
				printf("\n2 reverse triangle");
				printf("\n enter the choice3");
				scanf("%d",&choice3);
				    break;
				    getch();
	}