#include<stdio.h>
#include<conio.h>
void main(){
	    int start,end,choice,i;
	    clrscr();
	    printf("\n1 for square");
	    printf("\n2 for cube");
	    printf("\n3 for exit");
	    printf("\nenter the choice");
	    scanf("%d",&choice);
	    switch(choice){
		     case 1:printf("\nenter the starting point");
			    scanf("%d",&start);
			    printf("\nenter the ending point");
			    scanf("%d",&end);
			    for(i=start;i<=end;i++)
			    {
				printf("\nthe square of %d is %d",i,i*i);
			    }
			    break;
		     case 2:printf("\nenter the starting point");
			    scanf("%d",&start);
			    printf("\nenter the ending point");
			    scanf("%d",&end);
			    for(i=start;i<=end;i++)
			    {
				printf("\nthe cube of %d is %d",i,i*i*i);
			    }
			    break;
		     case 3:exit(0);
			  }
	    getch();
	    }