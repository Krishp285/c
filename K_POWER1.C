#include<stdio.h>
#include<conio.h>
void power();
void main()
{
	clrscr();
	power();
	getch();
}

void power()
{
	int power,no,ans,i;
	ans=1;

	printf("\nenter the base number :-");
	scanf("%d",&no);
	printf("\nenter the power number :-");
	scanf("%d",&power);

	for(i=1;i<=power;i++)
	{
		ans  = ans * no;
	}

	printf("\nthe power of number with ans is %d",ans);

}
