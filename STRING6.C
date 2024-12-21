#include<stdio.h>
#include<stdio.h>
#include<string.h>
void main(){
	char name[30];
	char name1[30];
	int i,len1,len2,j;
	clrscr();
	printf("\nenter the string1 and string2");
	gets(name);
	gets(name1);
	len1=strlen(name);
	len2=strlen(name1);
	for(i=len1;i<=(len1+len2);i++){
		name[i]=name1[j];
		j++;
		}
		name[i]='\0';
		printf("\nthe compared string %s",name);
		getch();
		}