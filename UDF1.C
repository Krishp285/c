#include<stdio.h>
#include<conio.h>
#include<sample.h>
void main(){
	int choice,b,ans,a;
	while(1){//start of while loop
	clrscr();
	printf("\n1 for add");
	printf("\n2 for sub");
	printf("\n3 for div");
	printf("\n4 for multi");
	printf("\n5 for exit");
	printf("\nenter the choice :-");
	scanf("%d",&choice);
	switch(choice){
		case 1: add();
			break;

		case 2: printf("\nenter two number :-");
			scanf("%d%d",&a,&b);
			ans=sub(a,b);
			printf("\nthe ans is %d",ans);
			break;
		case 3: ans=div();
			printf("the answerer is %d",ans);
			break;
		case 4:printf("\nenter two number :-");
			scanf("%d%d",&a,&b);
			mult(a,b);
			break;
		case 5: exit(0);
			break;
		}//end of switch case

	getch();

	}//end of while loop
	}
