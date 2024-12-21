#include<iostream.h>

#include<conio.h>
void main(){
	int i,a[20];l=2,j,no,flag=1;
	clrscr();

	for(i=0;i<15;)
	{
		     no=l;
		     flag=1;

		for(j=2;j<no;j++)
		{
			if(no%j==0)
			{
				  flag=0;
				  break;
			}
		}

		if(flag)
		{
		     a[i] = no;
		     i++;
		}
		l++;

	for(i=0;i<15;i++)
	{
		cout<<"\nA["<<i<<"] :  "<<a[i];

	}
	getch();
	}