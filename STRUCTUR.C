/*                  author-krish patel
		    dob-27 june 2023
		    objective- first program of structure

*/
#include<stdio.h>
#include<conio.h>
struct student{
	int sid;
	char name[30];
	float fees;
	}s1,s2,s3,s4,s5;
void scan();
void display();
void main(){
	int choice;
	while(1){
	clrscr();
	printf("\n1---scan");
	printf("\n2---display");
	printf("\n3---exit");
	printf("\nenter the choice");
	scanf("%d",&choice);
	switch(choice){
		case 1: scan();
			break;
		case 2: display();
			break;
		case 3: exit(0);

	}
	getch();
	}
	}
void scan(){
	float temp;
	printf("\nenter the value of sid name and fees for s1");
	scanf("%d",&s1.sid);
	scanf("%s",s1.name);
	scanf("%f",&temp);
	s1.fees=temp;
	printf("\nenter the value of sid name and fees for s2");
	scanf("%d",&s2.sid);
	scanf("%s",s2.name);
	scanf("%f",&temp);
	s2.fees=temp;
	printf("\nenter the value of sid name and fees for s3");
	scanf("%d",&s3.sid);
	scanf("%s",s3.name);
	scanf("%f",&temp);
	s3.fees=temp;
	printf("\nenter the value of sid name and fees for s4");
	scanf("%d",&s4.sid);
	scanf("%s",s4.name);
	scanf("%f",&temp);
	s4.fees=temp;
	printf("\nenter the value of sid name and fees for s5");
	scanf("%d",&s5.sid);
	scanf("%s",s5.name);
	scanf("%f",&temp);
	s5.fees=temp;
	}
void display(){
printf("\nsid\tname\tfees\n");
printf("\%d\t%s\t%f\n",s1.sid,s1.name,s1.fees);
printf("\%d\t%s\t%f\n",s2.sid,s2.name,s2.fees);
printf("\%d\t%s\t%f\n",s3.sid,s3.name,s3.fees);
printf("\%d\t%s\t%f\n",s4.sid,s4.name,s4.fees);
printf("\%d\t%s\t%f\n",s5.sid,s5.name,s5.fees);
}


