#include<stdio.h>
#include<conio.h>
void main(){
	char name[30];
	char name1[30];
	int len1=0,i,j=0;
	int len2=0;
	clrscr();
	printf("\nenter the first string ");
	gets(name);
	printf("\nenter the second  string ");
	gets(name1);
	len1=strlen(name);
	len2=strlen(name1);

	for(i=len1;i<len1+len2;i++)
	{
	name[i]=name1[j];
	j++;
	}
	name[i]='\0';
	printf("\nthe concated string  is %s",name);
	getch();
	}