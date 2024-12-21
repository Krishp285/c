#include<iostream.h>
#include<conio.h>
void main(){
	   int no,sum=0,mul=1,temp;
	   clrscr();
	cout<<"\nenteer the number :-";
	cin>>no;
	   for(;no>0;)
	   {
	   temp=no%10;
	   sum=sum+temp;
	   mul=mul*temp;
	   no=no/10;

	   }
	   if(sum==mul)
	   {
	   cout<<"\nthe number is twin";
	   }
	   else
	   {
	   cout<<"\nthe number is not twin";
	   }
	   getch();
}