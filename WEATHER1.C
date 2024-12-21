#include<stdio.h>
#include<conio.h>
void main(){
	int a;
	clrscr();
	printf("\nenter the weather in(degree c)");
	scanf("%d",&a);
	if(a<0)
	{
	printf("\nfreezing weather");
	}
	if(a>0 && a<10)
	{
	printf("\nvery cold weather");
	}
	if(a>10 && a<20)
	{
	printf("\ncold weather");
	}
	if(a>20 && a<30)
	{
	printf("\nnormal weather");
	}
	if(a>30 && a<40)
	{
	printf("\nhot weather");
	}
	if(a>=40)
	{
	printf("\nvery hot weather");
	}
}