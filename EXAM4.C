/*              multiple comment line

		AUTHOR - krish kalpesh patel
		DOC - 1 july 2023
		objective - to create student id(exam 2)
*/
//single comment line
//# preprocessor
#include<stdio.h>
//printf and scanf operation are stored
// standered input output header file
#include<conio.h>
//getch and clrscr
//console input output header file
#define SIZE 3
//input of 3 students
struct student{
	char name[50];//character datatype name
	char grade;//character grade
	int std; //integer student id
	int physics,maths,chemistry,computer,english,sid,total,per;  //integer datatype
	}; //end of structure (student)
	struct student students[3];//nested structure of student
int main(){ //start of main function
	int i,student;//integer i and student
	char a[100];//character a
	FILE *file; //file pointer
	clrscr();//to clear screen
	file=fopen("students.txt","w");//to open write file
	if(file==NULL) //if file is equal to 0
	{//start of if
	printf("\nerror opening file");//display of error
	return 1; //it will return 1
	} //end of if
	for(i=1;i<=3;i++)
	{//start of for loop
	printf("enter the details of student %d",i); //details
	printf("\nsid "); //print of sid
	scanf("%d",&students[i].sid);  //scanning of sid
	printf("\nname ");  //print of name
	scanf("%s",students[i].name); //scanning of name
	printf("\nstd"); //print of std
	scanf("%d",&students[i].std);  //scanning of std
	printf("\nenglish marks ");//print of english marks
	scanf("%d",&students[i].english); //scanning of english marks
	printf("\nphysics marks "); //print of english marks
	scanf("%d",&students[i].physics);//scanning of physics marks
	printf("\nmaths marks "); //print of maths marks
	scanf("%d",&students[i].maths);//scanning of maths marks
	printf("\nchemistry marks "); //print of chemistry marks
	scanf("%d",&students[i].chemistry); //scanning of chemistry marks
	printf("\ncomputer marks ");//print of computer marks
	scanf("%d",&students[i].computer);//scanning of computer marks
	students[i].total=students[i].maths+students[i].english+students[i].chemistry+students[i].physics+students[i].computer;//total
	students[i].per=students[i].total/5;//percentage
	       if(students[i].per>=90)
			{ //start of if
				students[i].grade='A';
			}//end of if
		else if(students[i].per>=80)
			{ //start of else if
			students[i].grade='B';
			}//end of else if
		else
		{ //start of else
		students[i].grade='C';
		}
	printf("\n");//new line
	}//end of else
	for(i=1;i<=3;i++){
	fprintf(file,"\nstudents %d details",i);//print of student details in file
	fprintf(file,"\nname %s",students[i].name);//print of name in file
	fprintf(file,"\nstd %d",students[i].std);//print of std in file
	fprintf(file,"\nsid %d",students[i].sid);//print of sid in file
	fprintf(file,"\nphysics marks %d",students[i].physics);//print of student details in file
	fprintf(file,"\nmaths marks %d",students[i].maths);//print of student details in file
	fprintf(file,"\nchemistry marks %d",students[i].chemistry);//print of student details in file
	fprintf(file,"\nenglish marks %d",students[i].english);//print of student details in file
	fprintf(file,"\ncomputer marks %d",students[i].computer);//print of student details in file
	fprintf(file,"\ntotal %d ",students[i].total);
	fprintf(file,"\npercentage %d ",students[i].per);
	fprintf(file,"\ngrade %c ",students[i].grade);
	fprintf(file,"\n"); //new line
	}//end of for loop
	fclose(file); //closing of write file
	file =fopen("students.txt","r"); //opening of read file
	if(file==NULL) //if user entered value is 0
	{//start of if
	printf("\nerror opening file");//error when user enter o
	return 1 ; //int type returning value
	}//end of if
	while(fgets(a,sizeof(a),file)!=NULL) //to read code in console screen
					//if data entered is 0 then while loop will be continue
					//EOF is end of file a==check for end of file and while loop stop or exits
	{ //start of while loop
	printf("%s",a);
	} //end of if
	fclose(file); //closing of read file
	getch();//to hold screen

	}
