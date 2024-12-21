#include<iostream.h>
#include<conio.h>
void main(){
	int i,j,dup,k,no,rev=0,temp=0;
	clrscr();
	cout<<"\nenteer the number :-";
	cin>>no;
	dup=no;
	for(;no>0;)
	{
		temp=no%10;
		rev=(rev*10)+temp;
		no=no/10;
	}
	if(dup==rev)
	{
	 cout<<"\nthe number is pallindrone number ";
	}

	getch();
	}