#include<stdio.h>
#include<conio.h>
#define SIZE 2
struct Student
{
	int sid;
	char name[30],grade;
	float fees;
	float english,science,maths,per,total;
	int flag;
}s[SIZE];//array of struct
void createStudent();
void displayStudent();
void calculateGrade(int index);
int search(int id);
void update();
void displayParticular(int index);
void del(int index);
void main()
{
	int choice,index=-1;
	int id;
	while(1)
	{
		clrscr();
		printf("1------->Create");
		printf("\n2------->Display");
		printf("\n3------->Search");
		printf("\n4------->Update");
		printf("\n5------->Delete");
		printf("\n6------->Exit");
		printf("\nEnter the choice=");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:createStudent();
			       break;
			case 2:displayStudent();
			      break;
			case 3:printf("Enter the id u want to search=");
			      scanf("%d",&id);
			      index=search(id);
			      if(index!=-1)
			      {
			      printf("\nid\tname\tfees\tEnglish\tScience\tMaths\tTotal\tPer\tGrade");
			      printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",s[index].sid,s[index].name,s[index].fees,s[index].english,s[index].science,s[index].maths,s[index].total,s[index].per,s[index].grade);
			      }
			      else
			      {
			      printf("Data not found");
			      }
			      break;
			case 4: update();
				break;
			case 5:printf("Enter the id u want to search=");
				scanf("%d",&id);
				del(id);
				break;
			case 6:exit(0);
		}
		getch();
	}
}
void createStudent()
{
	float temp;
	int i;
	for(i=0;i<SIZE;i++)
	{
		 printf("Enter the id=");
		 scanf("%d",&s[i].sid);
		 printf("\nEnter the name=");
		 scanf("%s",s[i].name);
		 printf("\nEnter the fees=");
		 scanf("%f",&temp);
		 s[i].fees=temp;
		 printf("\nEnter the marks of English=");
		 scanf("%f",&temp);
		 s[i].english=temp;
		 printf("\nEnter the marks of science=");
		 scanf("%f",&temp);
		 s[i].science=temp;
		 printf("\nEnter the marks of maths=");
		 scanf("%f",&temp);
		 s[i].maths=temp;
		 calculateGrade(i);
		 s[i].flag=1;
	}
}
void calculateGrade(int i)
{
	s[i].total=s[i].english+s[i].science+s[i].maths;
	s[i].per=s[i].total/3;
	if(s[i].per>90)
	{
	s[i].grade='A';
	}
	else if(s[i].per>80)
	{
	s[i].grade='B';
	}
	else
	{
	s[i].grade='C';
	}
}
void displayStudent()
{
	int i;
	printf("\nid\tname\tfees\tEnglish\tScience\tMaths\tTotal\tPer\tGrade");
	for(i=0;i<SIZE;i++)
	{
		if(s[i].flag==1)
			{
			printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",s[i].sid,s[i].name,s[i].fees,s[i].english,s[i].science,s[i].maths,s[i].total,s[i].per,s[i].grade);
			}
	}
}
int search(int id)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		if(s[i].sid==id)
		{
			return i;
		}

	}//end of for
	return -1;
}//end of int search
void update()
{
	int id,index=-1,choice;
	float temp;
	printf("\nEnter the is u want to update=");
	scanf("%d",&id);
	index=search(id);
	if(index==-1)
	{
		printf("\nData not found and Can't be update");
	}
	else
	{
		printf("\n1.Update new English marks");
		printf("\n2.Update new Science marks");
		printf("\n3.Update new Maths marks");
		printf("\nEnter the choice:-");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				displayParticular(index);
				printf("\nEnter the new English marks=");
				scanf("%f",&temp);
				s[index].english=temp;
				calculateGrade(index);
				printf("\nThe marks after updation are");
				displayParticular(index);
				break;
			case 2:
				displayParticular(index);
				printf("\nEnter the new Science marks=");
				scanf("%f",&temp);
				s[index].science=temp;
				calculateGrade(index);
				printf("\nThe marks after updation are");
				displayParticular(index);
				break;
			case 3:
				displayParticular(index);
				printf("\nEnter the new Maths marks=");
				scanf("%f",&temp);
				s[index].maths=temp;
				calculateGrade(index);
				printf("\nThe marks after updation are");
				displayParticular(index);
		}//end of choice
	}//end of if else
}//end of void update
void displayParticular(int i)
{
	if(s[i].flag==1)
	{
		printf("\nid\tname\tfees\tEnglish\tScience\tMaths\tTotal\tPer\tGrade");
		printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",s[i].sid,s[i].name,s[i].fees,s[i].english,s[i].science,s[i].maths,s[i].total,s[i].per,s[i].grade);
	}
	else
	{
		printf("\nData not found");
	}
}//end of disstd
void del(int id)
{
	int index=-1;
	index=search(id);
	if(index>=0)
	{
		s[index].flag=-1;
	}
	else
	{
		printf("\nData not found");
	}
}//end of void del


