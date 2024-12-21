#include<stdio.h>
#include<conio.h>
struct student{
	int sid;
	char name[30];
	float fees;
	}s1,s2;
void createstudent();
void displaystudent();
void main(){
	int choice;
	while(1){
	clrscr();
	printf("\n1 for create");
	printf("\n2 for display");
	printf("\n3 for exit");
	printf("\nenter the choice :-");
	scanf("%d",&choice);
	switch(choice){
		case 1:createstudent();
		       break;
		case 2:displaystudent();
			break;
		case 3:exit(0);
		       break;

			}

	getch();
	}
}
void createstudent(){
	float temp;
	printf("\nenter the sid and name ");
	scanf("%d",&s1.sid);
	scanf("%s",s1.name);
	printf("\nenter the fees");
	scanf("%f",&temp);
	s1.fees=temp;
	printf("\nenter the sid and name ");
	scanf("%d",&s2.sid);
	scanf("%s",s2.name);
	printf("\nenter the fees");
	scanf("%f",&temp);
	s2.fees=temp;
}
void displaystudent(){
	printf("\nsid\tname\tfees");
	printf("\n%d\t%s\t%.2f",s1.sid,s1.name,s1.fees);
	printf("\n%d\t%s\t%.2f",s2.sid,s2.name,s2.fees);


}