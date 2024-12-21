#include<stdio.h>
#include<conio.h>
void add();
int sub(int x , int y);//
void multi(int x,int y);
int div();
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
			case 1: add();
				break;
			case 2: ans=sub(4,3);
				printf("\nthe answer is %d",ans);
				break;
			case 3: printf("\nenter the value of a and b");
				scanf("%d%d",&a,&b);
				multi(a,b);
				break;
			case 4: ans=div();
				printf("\nthe answer is %d",ans);
				break;
			case 5:exit(0);
			}//end of switch
			getch();
			} //end of while
			}
	void add(){
		int a,b,c;
		printf("\nenter the value of a and b");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("\nthis is the value of c %d",c);
		}
		int sub(int x,int y){
		int z;
		z=x-y;
		return z;
		}
		 void  multi(int x,int y){
		int c;
		c=x*y;
		printf("\nthis is the value of c ",c);
		}
		int div(){
		int a,b,c;
		printf("\nenter the value of a and b");
		scanf("%d%d",&a,&b);
		c=a/b;
		return c;
		}