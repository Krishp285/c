#include<stdio.h>
#include<conio.h>
#define SIZE 2
struct student
{
	int rollno;
	int marks[5];
	char name[30];

}s[SIZE];
void main(){
	   int i,total[2]={0},j;
	   clrscr();
	   for(i=0;i<SIZE;i++){
	   printf("\nenter the name :-");
	   scanf("%s",s[i].name);
	   printf("\nenter the roll no :-");
	   scanf("%d",&s[i].rollno);

	   for(j=0;j<5;j++)
	   {
		printf("\nenter the marks of %d",j);
		scanf("%d",&s[i].marks[j]);

		total[i] = total[i] + s[i].marks[j];
	   }


	   }

	   printf("\nname\trollno\ttotal");


	   for(i=0;i<SIZE;i++)
	   {
	   printf("\n%s\t%d\t%d",s[i].name,s[i].rollno,total[i]);
	   }


	   getch();
}
