\/*              multiple comment line

		AUTHOR - krish kalpesh patel
		DOC - 1 july 2023
		objective - to create student id(exam 2)
*/
//single comment line
#include<stdio.h>
//printf and scanf operation are stored
// standered input output header file
#include<conio.h>
//getch and clrscr
//console input output header file
#define SIZE 3
//input of 3 students
struct Student{ //start of structure student
	int sid,flag; //integer sid and flag
	char name[30];//character name
	float fees; //float fees
	float maths,eng,chem,phy,comp,total,per;
	char grade;//character datatype grade
	      }s[SIZE];
void create();//declaration of create function
void display();//declaration display function
int search();//declaration of search function
void update();//declaration of update function
void calculateGrade(); //declaration of calculating grade function
void del();//declaration part
void main() { //definition of main function
	     int choice,id;//integer choice and id
	     while(1){ //start of while
	     clrscr(); //to clear screen
	     printf("\n1---- Create"); // to print create
	     printf("\n2---- Display"); // to print display
	     printf("\n3---- Search"); // to print search
	     printf("\n4---- Update"); // to print update
	     printf("\n5---- Delete");  // to print delete
	     printf("\n6---- Exit");  // to print exit
	     printf("\nEnter your choice = "); // to print choice
	     scanf("%d",&choice);//scanning of choice
	     switch(choice){ //start of switch (choice)
		      case 1:create();
			     break;//to stop case 1
		      case 2:display();
			     break; //to stop case 2
		      case 3:id=search();
			     if(id!=-1){//start of if
			     printf("\nRecord found at %d",id);
			     }//end of if
			     else
			     {//start of else
			     printf("\nRecord not found");
			     }//end of else
			     break;//to stop case 3
		      case 4:update();
			    break;//to stop case 4
		      case 5:del();
			    break;//to stop case 5
		      case 6:exit(0);
			  }//end of switch
			  getch();
		    }//end of while
	     }//end of main
void create(){//start of create function(definition)
int i;//integer i
float temp; //float temporary
for(i=0;i<SIZE;i++){//start of for loop
	 printf("\nEnter the SID = ");
	 scanf("%d",&s[i].sid);
	 printf("\nEnter the name of student name = ");
	 scanf("%s",&s[i].name);
	 printf("\nEnter the fees = ");
	 scanf("%f",&temp);
	 s[i].fees=temp;
	 printf("\nEnter the marks of maths = ");
	 scanf("%f",&temp);
	 s[i].maths=temp;
	 printf("\nenter the marks of english = ");
	 scanf("%f",&temp);
	 s[i].eng=temp;
	 printf("\nenter the marks of chemistry = ");
	 scanf("%f",&temp);
	 s[i].chem=temp;
	 printf("\nenter the marks of physics = ");
	 scanf("%f",&temp);
	 s[i].phy=temp;
	 printf("\nenter the marks of computer = ");
	 scanf("%f",&temp);
	 s[i].comp=temp;
	 calculateGrade();
	 s[i].flag=1;
		}//end of for loop
	}//end of create function (definition)
void calculateGrade(){//start of calculate grade function (definition)
		int i; //integer of i
		s[i].total=s[i].maths+s[i].eng+s[i].chem+s[i].phy+s[i].comp;//total
		s[i].per=s[i].total/5;//percentage
		if(s[i].per>=90)
			{ //start of if
				s[i].grade='A';
			}//end of if
		else if(s[i].per>=80)
			{ //start of else if
			s[i].grade='B';
			}//end of else if
		else
		{ //start of else
		s[i].grade='C';
		}//end of else
		     }//end of calculate grade function
void display(){//start of display function(definition)
	int i;//integer i
	printf("\nsid name fees  maths  eng  chem  phy  comp  total  per  grade\n");
	for(i=0;i<SIZE;i++){//start of for loop
		if(s[i].flag==1){//start of if
		printf("\n%d  %s\t%.2f  %.2f  %.2f  %.2f  %.2f  %.2f  %.2f  %.2f  %c",s[i].sid,s[i].name,s[i].fees,s[i].maths,s[i].eng,s[i].chem,s[i].phy,s[i].comp,s[i].total,s[i].per,s[i].grade);
				}//end of if
			}//end of for
	       }//end of display
int search(){//start of search (definition)
      int id,i; //integer id and i
      printf("\nEnter the sid of which u want to search = ");//print search number
      scanf("%d",&id);//scanning of search number from user
      for(i=0;i<SIZE;i++){//start of for loop
	  if(s[i].sid==id){//start of if
	  return i;//stop on value of i
			  }//end of if
			}//end of for
	  return -1;//return less value of i due to starting of array from 0
	     }//end of search
void update (){ //start of update function(definition)
		int choice,id;//choice and id
		float marks;  //float marks
		id= search(); //id = searched number
		if(id==-1){//start of if
		// if id equal to -1
		printf("\nRecord not found");//print of record not found
	      }//end of if
		else{//start of else
			printf("\n1----Update Maths Marks");//update of new marks (print)
			printf("\n2----Update English Marks");//update of new marks (print)
			printf("\n3----Update Chem Marks"); //update of new marks (print)
			printf("\n4----Update Phy Marks");//update of new marks (print)
			printf("\n5----Update Computer Marks");//update of new marks (print)
			printf("\nEnter your choice = ");//enter choice(print)
			scanf("%d",&choice);//scanning of choice
		switch(choice){//start of switch case
		case 1: printf("\nenter the new marks = ");
			scanf("%f",&marks);
			if(marks>100)
			{ //start of if
				printf("\nYou are not allowed to exceed 100");
			}//end of if
			else
			{//start of else
			s[id].maths=marks;
			calculateGrade(id);
			}//end of else
			break;
		case 2: printf("\nenter the new marks = ");
			scanf("%f",&marks);
			if(marks>100)
			{//start of if
				printf("\nYou are not allowed to exceed 100");
			}//end of if
			else
			{//start of else
			s[id].eng=marks;
			calculateGrade(id);
			}//end of else
			break;
		case 3: printf("\nenter the new marks = ");
			scanf("%f",&marks);
			if(marks>100)
			{//start of if
				printf("\nYou are not allowed to exceed 100");
			}//end of if
			else
			{//start of else
			s[id].chem=marks;
			calculateGrade(id);
			}//end of else
			break;
		case 4: printf("\nenter the new marks = ");
			scanf("%f",&marks);
			if(marks>100)
			{//start of if
				printf("\nYou are not allowed to exceed 100");
			}//end of if
			else
			{//start of else
			s[id].phy=marks;
			calculateGrade(id);
			}//end of else
			break;
		case 5: printf("\nenter the new marks = ");
			scanf("%f",&marks);
			if(marks>100)
			{//start of if
				printf("\nYou are not allowed to exceed 100");
			}//end of if
			else
			{//start of else
			s[id].comp=marks;
			calculateGrade(id);
			}//end of else
			break;
			}//end of switch
		}//end of else
	}//end of update
void del(){//start of delete function(definition)
	int d,flag,i; //integer d flag and i
	printf("\nenter the number = ");
	scanf("%d",&d);
	for(i=0;i<SIZE;i++){//start of for loop
		s[i].flag=1;
		if(i==d)
		{//start of if
			s[i].flag=-1;
			printf("\nDeleted successfully");
		}//end of if
			  }//end of for
	}//end del