/*
		AUTHOR-:SHIVAM MARKANDAY
		DoC-:05/07/2023
		OBJECTIVE-:STUDENT DASHBOARD IN FILES
*/
#include<stdio.h>
#include<conio.h>
struct Student{
       int sid;
       char name[30];
       int fees,comp,eng,maths,chem,phy;

}s[10];//end of struct
void main(){
	  struct Student temp;
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
	  fwrite(&s[i],sizeof(s[i]),1,fp);
	  }
	  fclose(fp);
	  fp=fopen("studentd.txt","r");
	   printf("\nThe record from the file is \n");
	  printf("\nSid\tName\tFees\tMaths\tComp\tEng");
	  for(i=0;i<5;i++){
	  fread(&temp,sizeof(temp),1,fp);

	  printf("\n%d\t%s\t%d\t%d\t%d\t%d",temp.sid,temp.name,temp.fees,temp.maths,temp.comp,temp.eng);
	  }
	  fclose(fp);
	  getch();
}