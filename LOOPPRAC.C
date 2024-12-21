/*
   entry controlled loop
	for while
   exit controlled loop
    do while
    no of iteration not known while
    no of iteration known for
*/
#include<stdio.h>
#include<conio.h>
void main(){
	   int i,choice,no;
	   clrscr();
	   printf("\n1 for for loop");
	   printf("\n2 for while loop");
	   printf("\n3 for do while loop");
	   printf("\n4 for exit");
	   printf("\nenter the choice :-");
	   scanf("%d",&choice);
	   switch(choice){
		    case 1:printf("\nenter the number:-");
			   scanf("%d",&no);
			   for(i=1;i<=no;i++)
			   {
			   printf("\nroyal technosoft");
			   }
			   break;
		    case 2:printf("\nenter the number:-");
			   scanf("%d",&no);
			   i=1;
			   while(i<=no)
			   {
			   printf("\nroyal technosoft");
			   i++;
			   }
			   break;
		    case 3:printf("\nenter the number:-");
			   scanf("%d",&no);
			   i=1;
			  do{
			   printf("\nroyal technosoft");
			   i++;
			   }while(i<=no);
			   break;
		    case 4:exit(0);
			   }
		getch();
		}