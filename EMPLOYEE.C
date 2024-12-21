/* 			author krish patel
			doc- 29 june 2023
			objective- to create detail of employee
*/

#include<stdio.h>
#include<conio.h>
#define SIZE 3
struct employee{ //start of structure employee
	int eid;
	float pf,salary,tax,allow,nextsal,value;
	char name[30];
	}s[SIZE];
void create();
void display();
int search();
void update();
void calculatenextsal();
void main(){//star of void
	int choice,id;
	while(1){ //start of while
	clrscr();
	printf("\n1---create");
	printf("\n2---display");
	printf("\n3---update");
	printf("\n4---search");
	printf("\n5---exit");
	printf("\nenter the choice");
	scanf("%d",&choice);
	switch(choice){//start of choice
		case 1: create();
			break;
		case 2: display();
			break;
		case 3: update();
			break;
		case 4: id = search();
			if(id!=-1){
			printf("\nrecord found at %d",id);
			}
			else{
			printf("\nrecord not found");
			}
			break;
		case 5: exit(0);

	} //end of choice
	getch();
	} //end of while
	}//end of void
void create(){ //start of create
		float temp;
		int i;
		for(i=0;i<SIZE;i++){//start of for in create
		printf("\nenter the  eid");
		scanf("%d",&s[i].eid);
		printf("\nenter the name");
		scanf("%s",s[i].name);
		printf("\nenter the pf");
		scanf("%f",&temp);
		s[i].pf=temp;

		printf("\nenter the salary");
		scanf("%f",&temp);
		s[i].salary=temp;
		printf("\nenter the tax");
		scanf("%f",&temp);
		s[i].tax=temp;
		printf("\nenter the allow");
		scanf("%f",&temp);
		s[i].allow=temp;
		calculatenextsal(i);
	} //end of for loop in create
	} //end of create
void calculatenextsal(int i)
		{ //start of calculatenextsal
	s[i].nextsal=s[i].salary-s[i].pf-s[i].tax+s[i].allow;

} //end of calculatenextsal
void display() {  //start of display
		int i;
		printf("\neid\tname\tpf\tsalary\ttax\tallow\tnextsal\n");
		for(i=0;i<SIZE;i++){//start of for
		printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",s[i].eid,s[i].name,s[i].pf,s[i].salary,s[i].tax,s[i].allow,s[i].nextsal);
}//end of for
}//end of display
int search(){//start of search
	  int id,i;
	  printf("\nenter the eid which you want to search/update=");
	  scanf("%d",&id);
	  for(i=0;i<SIZE;i++){//start of for
		if(s[i].eid==id){//start of if
				return i;
				}//end of if
				}//end of for
				return -1;
		}//end of search

void update(){ //start of update
		int id=-1;
		int choice;
	float value;
	id=search();
	if(id==-1){ //start of if
	    printf("\nRecord not found");
		}//end of if
	    else
	    {//start of else
	    printf("\n1----Update pf");
	    printf("\n2----Update salary");
	    printf("\n3----Update tax");
	    printf("\n4----Update allow");
	    printf("\nEnter your choice = ");
	    scanf("%d",&choice);
	    switch(choice)
	    {//start of choice
		case 1: printf("\nenter the new pf = ");
			scanf("%f",&value);
			s[id].pf=value;
			calculatenextsal(id);
			break;
		case 2: printf("\nenter the new salary = ");
			scanf("%f",&value);
			s[id].salary=value;
			calculatenextsal(id);
			break;
		case 3: printf("\nenter the new tax = ");
			scanf("%f",&value);
			s[id].tax=value;
			calculatenextsal(id);
			break;
		case 4: printf("\nenter the new allow = ");
			scanf("%f",&value);
			s[id].allow=value;
			calculatenextsal(id);
			break;

	    }//enf of switch
	    }//end of else
  }//end of update
