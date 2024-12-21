#include<stdio.h>
#include<conio.h>
int add(int x , int y);
int sub(int x , int y);
int mult(int x , int y);
int div(int x , int y);
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
			case 1:ans=add(4,3);
				printf("\nthe answer is %d",ans);
				break;
			case 2: ans=sub(4,3);
				printf("\nthe answer is %d",ans);
				break;
			case 3:ans=mult(4,3);
				printf("\nthe answer is %d",ans);
				break;
			case 4:ans=div(4,2);
				printf("\nthe answer is %d",ans);
				break;
			case 5:exit(0);
			}//end of switch
			getch();
			} //end of while
			}
		int add(int x,int y){
		int z;
		z=x+y;
		return z;
		}
		int sub(int x,int y){
		int z;
		z=x-y;
		return z;
		}
		int mult(int x,int y){
		int z;
		z=x*y;
		return z;
		}
		int div(int x,int y){
		int z;
		z=x/y;
		return z;
		}
		}