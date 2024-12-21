#include<stdio.h>
#include<conio.h>
struct Student{
	int sid;
	char name[30];
	int physics,chemistry,maths,english,computer;
}s[2];//end of structure
void scan();
void display();
void main(){
	int choice;
	while(1){
	clrscr();
	printf("\n1-----scan");
	printf("\n2-----display");
	printf("\n3-----exit");
	printf("\nEnter the choice");
	scanf("%d",&choice);
	switch(choice){
		case 1:scan();
		       break;
		case 2:display();
		       break;
		case 3:exit(0);
	}//end of switch
	getch();
	}//end of while
}//end of main
void scan(){
	int i;
	int temp;
	for(i=0;i<2;i++){
		printf("\nEnter the value of sid, name and marks of physics, chemistry, maths, english,copmuter for s[%d]",i+1);
		scanf("%d",&s[i].sid);
		scanf("%s",s[i].name);
		scanf("%d",&temp);
		s[i].physics=temp;
		scanf("%d",&temp);
		s[i].chemistry=temp;
		scanf("%d",&temp);
		s[i].maths=temp;
		scanf("%d",&temp);
		s[i].english=temp;
		scanf("%d",&temp);
		s[i].computer=temp;


	}//end of for
}//end of scan
void display(){
	int i;
	printf("\nSID\tName\tPhy\tChem\tMaths\tEng\tComp\n");
	for(i=0;i<2;i++){
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t",s[i].sid,s[i].name,s[i].physics,s[i].chemistry,s[i].maths,s[i].english,s[i].computer);
	}//end of for
}//end of display			      `