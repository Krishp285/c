#include<stdio.h>
#include<conio.h>
void add(int x,int y);
void sub(int x , int y);//
void multi(int x,int y);
void div(int x,int y);
void main(){
	int choice,ans,a,b;
	while(1){
	clrscr();
			printf("\n1 add");
			printf("\n2 sub");
			printf("\n3 multi");
			printf("\n4 divi");
			printf("\n5 exit");
			printf("\nenter the choice");
			scanf("%d",&choice);
			switch(choice){
			case 1:  printf("\nenter the value of a and b");
				scanf("%d%d",&a,&b);
				add(a,b);
				break;
			case 2: printf("\nenter the value of a and b");
				scanf("%d%d",&a,&b);
				sub(a,b);
				break;
			case 3: printf("\nenter the value of a and b");
				scanf("%d%d",&a,&b);
				multi(a,b);
				break;
			case 4:  printf("\nenter the value of a and b");
				scanf("%d%d",&a,&b);
				div(a,b);
				break;
			case 5:exit(0);
			}//end of switch
			getch();
			} //end of while
			}
		void  add(int x,int y){
		int c;
		c=x+y;
		printf("\nthis is the value of c ",c);
		}
		void  sub(int x,int y){
		int c;
		c=x-y;
		printf("\nthis is the value of c ",c);
		}
		void  multi(int x,int y){
		int c;
		c=x*y;
		printf("\nthis is the value of c ",c);
		}
		 void  div(int x,int y){
		int c;
		c=x/y;
		printf("\nthis is the value of c ",c);

		}