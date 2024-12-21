#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//standered library (generate random number from computer)
void main(){
	int i,num,choice,self=0,computer=0,round;
	clrscr();
	printf("\nenter 1 for rock");
	printf("\nenter 2 for paper");
	printf("\nenter 3 for scissor");
	printf("\nenter the number of round");
	scanf("%d",&round);
	for(i=0;i<=round;i++)
	{
	printf("\nenter the choice");
	scanf("%d",&choice);
	num=(rand()%3+1);
	if(choice==num)
	{
	 printf("\nboth choose same try again");
	}
	else if(choice==1 && num==2)
	{
	printf("\nyou choose rock and computer choose paper");
	printf("the winner is computer");
	computer++;
	}
	else if(choice==1 && num==3)
	{
	printf("\nyou choose rock and computer choose scissor");
	printf("the winner is user");
	self++;
	}
	else if(choice==2 && num==1)
	{
	printf("\nyou choose paper and computer choose rock");
	printf("the winner is user");
	self++;
	}
	else if(choice==2 && num==3)
	{
	printf("\nyou choose paper and computer choose scissor");
	printf("the winner is computer");
	computer++;
	}
	else if(choice==3 && num==1)
	{
	printf("\nyou choose scissor and computer choose rock");
	printf("the winner is computer");
	computer++;
	}
	else if(choice==3 && num==2)
	{
	printf("\nyou choose scissor and computer choose paper");
	printf("the winner is user");
	self++;
	}
	}
	printf("\nthe score of user is %d",self++);
	printf("\nthe score of computer is %d",computer++);
	if(self++ > computer++){
	printf("\nthe winner is user");
	}
	else if(self++ == computer++) {
	printf("\nthe game is tie");
	}
	else {
	printf("\nthe winner is computer");
	}
	getch();
}


