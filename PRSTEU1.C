#include<stdio.h>
#include<conio.h>
#define SIZE 4
struct student{
      int sid,sem;
      char name[30];

}s[SIZE];
void main(){
	clrscr();
	student();
	getch();
	}
student()
{       int i;
	for(i=1;i<=4;i++){
	printf("\nenter the name :-");
	scanf("%s",s[i].name);
	printf("\nenter the sid :-");
	scanf("%d",&s[i].sid);
	printf("\nenter the sem :-");
	scanf("%d",&s[i].sem);
	}
	printf("\nsid\tname\tsem");
	for(i=1;i<=4;i++){
		printf("\n%d\t%s\t%d",s[i].sid,s[i].name,s[i].sem);

	}
}