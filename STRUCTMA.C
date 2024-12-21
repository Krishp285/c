#include<stdio.h>
#include<conio.h>
#define SIZE 2
struct student{ //start of structure student
	int sid;
	char name[30];
	float fees;
	float physics,chem,maths,total,per;
	char grade;
	int flag;
	}s[SIZE];
	//struct student s[SIZE]
	void create();//declaration of create function
	void display();//declaration of display function
	int search();//declaration of search function
	void update();//declaration of update function
	void del();   //declaration of delete function
	void calculategrade();//declaration of calculategrade function

void main(){//start of main function
		int choice,id;
		while(1)
		{//start of while loop
			clrscr();
			printf("\n1 for create");
			printf("\n2 for display");
			printf("\n3 for update");
			printf("\n4 for search");
			printf("\n5 for del");
			printf("\n6 for exit");
			printf("\nenter the choice");
			scanf("%d",&choice);
			switch(choice){//start of switch choice
				case 1: create(); //definition
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
				case 5: del();
					break;
				case 6: exit(0);
					break;
					}//end of switch choice
					getch();

		}//end of while loop

	   }//end of main function
void create(){ //start of create function (call of function)
		int flag;
		float temp;
		int i;
		for(i=0;i<SIZE;i++){//start of for in create
		printf("\nenter the  sid");
		scanf("%d",&s[i].sid);
		printf("\nenter the name");
		scanf("%s",s[i].name);
		printf("\nenter the fees");
		scanf("%f",&temp);
		s[i].fees=temp;
		printf("\nenter the physics");
		scanf("%f",&temp);
		s[i].physics=temp;
		printf("\nenter the chem");
		scanf("%f",&temp);
		s[i].chem=temp;
		printf("\nenter the maths");
		scanf("%f",&temp);
		s[i].maths=temp;
		calculategrade(i);
	} //start of for in create
 }//end of create function
 void calculategrade(int i)

	{//start of calculategrade function
		s[i].total=s[i].physics+s[i].chem+s[i].maths;
		s[i].per=s[i].total/3;
		if(s[i].per>=90){ //start of if
			s[i].grade='A';
			} //enf of if
		else if(s[i].per>=80){//start ofif  else
			s[i].grade='B';
			}//end of if  else

		else { //start of else
			s[i].grade='c';
		      } //end of else
	}//end of calculategrade function
 void display(){//start of diplay function
	int i;
	printf("\nsid\tname\tfees\tphysics\tchem\tmaths\ttotal\tper\tgrade\n");
	for(i=0;i<SIZE;i++){//start of for loop
	if(s[i].flag==1){
		printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c\n",s[i].sid,s[i].name,s[i].fees,s[i].physics,s[i].chem,s[i].maths,s[i].total,s[i].per,s[i].grade);
		} 			   }//end of for loop
		}//end of display function
int search(){//start of search
	int id,i;
	printf("\nenter the sid which you want to search");
	scanf("%d",&id);
	for(i=0;i<SIZE;i++){//start of for
		if(s[i].sid==id)
		{//start of if
		return i;
		}//end of if
		}//end of for loop
		return -1;

	    }//end of search
void update(){//start of update
	     int id=-1;
	     int choice;
	     float marks;
	     id=search();
	     if(id==-1){//start of if
		       printf("\nrecord not found");
			}//end of if
	     else{//start of else main
		   printf("\n1 for update physics marks");
		   printf("\n2 for update chemistry marks");
		   printf("\n3 for update maths marks");
		   printf("\n4 enter the choice");
		   scanf("%d",&choice);
		   switch(choice){//start of choice
			case 1: printf("\nenter new marks");
				scanf("%f",&marks);
				if(marks>100){//start of if
				     printf("\nyou are not allowed to exceed 100");
				    }//end of if
				else  {//start of else
					s[id].physics=marks;
					calculategrade(id);
				}//end of else
					break;
			case 2: printf("\nenter new marks");
				scanf("%f",&marks);
				if(marks>100){//start of if
				     printf("\nyou are not allowed to exceed 100");
				    }//end of if
				else  {//start of else
					s[id].chem=marks;
					calculategrade(id);
				}//end of else
					break;
			case 3: printf("\nenter new marks");
				scanf("%f",&marks);
				if(marks>100){//start of if
				     printf("\nyou are not allowed to exceed 100");
				    }//end of if
				else  {//start of else
					s[id].maths=marks;
					calculategrade(id);
				}//end of else
					break;
			}//end of choice
		    } //end of else main
	     }//end of update
void del(){//start of delete
	int d,flag,i;
	printf("\nenter the number = ");
	scanf("%d",&d);
	for(i=0;i<SIZE;i++)
	{
		s[i].flag=1;
		if(i==d)
		{
			s[i].flag=-1;
			printf("\nDeleted successfully");
		}//end of if


	}//end of for
	}//end of delete
