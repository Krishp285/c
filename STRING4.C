#include<stdio.h>
#include<stdio.h>
#include<string.h>
void main(){
	char name[30];
	char name1[30];
	int i,len,j=0;
	clrscr();
	printf("\nenter the string");
	gets(name);
	len=strlen(name);
	for(i=len-1;i>=0;i--){
		name1[j]=name[i];
		j++;
		}
		name[j]='\0';
		printf("\nthe reverse of %s is %s",name,name1);
		getch();
		}