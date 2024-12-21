#include<stdio.h>
#include<conio.h>
void main(){
	   int i,rev=0,temp,dup,npc=0,no;
	   clrscr();
	   for(i=100;i<1000;i++)
	   {
	   dup=no=i;
	   rev=0;
	   while(no>0)
	   {
	    temp=no%10;
	    rev=(rev*10)+temp;
	    no=no/10;
	    }
	   if(dup!=rev)
	   {
	   npc++;
	   printf("%d ",dup);
	   }
	   }
	   printf("\nnot pallindrone no %d",npc);
	   getch();
	   }