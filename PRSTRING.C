#include<stdio.h>
#include<string.h>
void main(){
	char name[30],name1[30],name3[30],name4[30];
	int len,len1,x;
	clrscr();
	printf("\nenter the string\n");
	// scanf("%s",name);
	gets(name);
	gets(name1);
	x=strcmp(name,name1);//ramesh and rakesh ascii value is compared of each letter
	if(x==0){
		printf("\n%s and %s are equal",name,name1);
		}
	else{
		 printf("\n%s and %s are not equal",name,name1);
		}
	len=strlen(name);
	len1=strlen(name1);
	printf("\nthe length of name %s is %d",name,len);
	printf("\nthe length of name %s is %d",name1,len1);
	strcat(name,name1);
	printf("\nthe concated string is %s",name);
	strrev(name);
	printf("\nthe reverse of the  string is %s",name);

	getch();
	}
