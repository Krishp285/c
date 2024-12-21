#include<stdio.h>
#include<conio.h>
void main(){
	   char name[30],sname[30];
	   int std,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,total,per;
	   clrscr();
	   printf("\nenter the internal marks for physics :-");
	   scanf("%d",&m1);
	   printf("\nenter the internal marks for chemistry :-");
	   scanf("%d",&m2);
	   printf("\nenter the internal marks for maths :-");
	   scanf("%d",&m3);
	   printf("\nenter the internal marks for computer :-");
	   scanf("%d",&m4);
	   printf("\nenter the internal marks for english :-");
	   scanf("%d",&m5);
	   printf("\nenter the exam marks for physics :-");
	   scanf("%d",&m6);
	   printf("\nenter the exam marks for chemistry :-");
	   scanf("%d",&m7);
	   printf("\nenter the exam marks for maths :-");
	   scanf("%d",&m8);
	   printf("\nenter the exam marks for computer :-");
	   scanf("%d",&m9);
	   printf("\nenter the exam marks for english :-");
	   scanf("%d",&m10);
	   clrscr();
	   printf("***********************************your result***********************************");
	   printf("-------------------------------------------------------------------------------");
	   printf("\nname :-");
	   scanf("%s",name);
	   printf("\nschool name :-");
	   scanf("%s",sname);
	   printf("\nstd :-");
	   scanf("%d",&std);
	   printf("\n--------------------------------------------------------------------------------");
	   printf("\nsubject     internal      exam      total");


	   printf("\nphysics        %d         %d        %d",m1,m6,m1+m6);
	   printf("\nchemistry      %d         %d        %d",m2,m7,m2+m7);
	   printf("\nmaths          %d         %d        %d",m3,m8,m3+m8);
	   printf("\ncomputer       %d         %d        %d",m4,m9,m4+m9);
	   printf("\nenglish        %d         %d        %d",m5,m10,m5+m10);
	   printf("\n--------------------------------------------------------------------------------");
	   total=(m1+m6)+(m2+m7)+(m3+m8)+(m4+m9)+(m5+m10);
	   printf("\nthe total marks is %d",total);
	   per=(total/5);
	    printf("\nthe  percentage is %d",per);
	    if(per>=35)
	    {
	    printf("\nRESULT:- PASS");
	    }
	    else
	    {
	    printf("\nRESULT:- FAIL");
	    }
	   getch();
	   }