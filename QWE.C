#include<stdio.h>
#include<conio.h>
struct Student{
	int sid;
	char name[30],grade;
	int physics,chem,maths,total,english,computer;
	float percentage;
}s[10];//end of structure
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
	for(i=0;i<10;i++){
		printf("\nEnter the value of sid, name and marks of physics, chemistry, maths/bio,\n english,copmuter/sanskrit for s[%d]",i+1);
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
		s[i].total=s[i].physics + s[i].chemistry + s[i].maths + s[i].english + s[i].computer;
		s[i].per=s[i].total/5;
		if(s[i].per>90){
			s[i].grade='A';
		}
		else if(s[i].per>80){
			s[i].grade='B';
		}
		else if(s[i].per>70){
			s[i].grade='C';
		}
		else if(s[i].per>60){
			s[i].grade='D';
		}
		else if(s[i].per>50){
			s[i].grade='E';
		}
		else{
			s[i].grade='F';
		}
	}//end of for
}//end of scan
void display(){
	int i;
	printf("\nSID\tName\tPhy\tChem\tMaths\tEng\tComp\tTotal\tPer\tGrade\n\t\t\t\t/Bio\t\t/Sans\n");
	for(i=0;i<10;i++){
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\t%c",s[i].sid,s[i].name,s[i].physics,s[i].chemistry,s[i].maths,s[i].english,s[i].computer,s[i].total,s[i].percentage,s[i].grade);
	}//end of for
}//end of display