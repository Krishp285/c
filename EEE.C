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
       int fees,comp,eng,maths;

}s[10];//end of struct
void main(){
	  struct Student temp;
	  int holder,i;
	  FILE *fp;
	  clrscr();
	  fp=fopen("studentd.txt","w");
	  for(i=0;i<5;i++){
	  printf("\nEnter the sid,fees,marks in maths,eng and comp\n");
	  scanf("\n%d \n %s",&s[i].sid,s[i].name);
	  scanf("\n%d",&s[i].fees);
	  scanf("\n%d",&s[i].maths);
	  scanf("\n%d",&s[i].comp);
	  scanf("\n%d",&s[i].eng);
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