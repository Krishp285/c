#include<stdio.h>
#include<conio.h>
void main(){
	int start,end,i,choice;

	clrscr();
	printf("\n1 cube");
	printf("\n2 exit");
	printf("\nenter the choice - ");
	scanf("%d",&choice);
	switch(choice){
		case 1:printf("\n1----> for loop");
			printf("\n2----> while loop");
			printf("\n3-----> do while loop");
			printf("\nenter the choice - ");
			scanf("%d",&choice);
			switch(choice){
				case 1:printf("\nenter the start=");
				       scanf("%d",&start);
				       printf("\nenter the end=");
				       scanf("%d",&end);
				       for(i=start;i<=end;i++){
				       printf("\nthe answer of square is =%d",i*i*i);
				       }
					break;
					case 2:printf("\nenter the start=");
				       scanf("%d",&start);
				       printf("\nenter the end=");
				       scanf("%d",&end);
				       i=start;
				       while(i<=end){
				       printf("\nthe answer of square is =%d",i*i*i);
				       i++;
				       }
					break;
					case 3:printf("\nenter the start=");
				       scanf("%d",&start);
				       printf("\nenter the end=");
				       scanf("%d",&end);
				       i=start;
				       do{
				       printf("\nthe answer of square is =%d",i*i*i);
				      i++;
				       }while(i<=end);
					break;





		case 5:exit(0);
		default:printf("\ninvalid choice");

		}
		}


	getch();
	}